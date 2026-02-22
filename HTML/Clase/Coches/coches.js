// const persona = {
//     nombre: 'Bob',
//     apellido: 'Smith',
//     edad: 20,
//     aprobado: false,
//     contacto: {
//         telf: 7623786523,
//         email: 'jfajkfb'
//     },
//     notas: [1, 2, 3, 4]
// }

let coches = [
  {
    id: 1,
    marca: "Seat",
    modelo: "Ibiza",
    km: 10000,
  },
  {
    id: 2,
    marca: "Ford",
    modelo: "Focus",
    km: 20000,
  },
];

let lastIdCoche = Math.max(...coches.map((_) => _.id));

document.addEventListener("DOMContentLoaded", function (event) {
  document.forms.formNuevoCoche.onsubmit = onSubmitNuevoCoche;
  document.forms.formMoverCoche.onsubmit = onSubmitMoverCoche;
  for (const coche of coches) {
    crearFilaCoche(coche);
  }
});

function onSubmitNuevoCoche(event) {
  event.preventDefault();
  const form = event.currentTarget;
  const coche = {
    id: ++lastIdCoche,
    marca: form.elements.inputMarca.value,
    modelo: form.elements.inputModelo.value,
    km: form.elements.inputKm.value,
  };
  coches.push(coche);
  crearFilaCoche(coche);
  form.reset();
}

function crearFilaCoche(coche) {
  const row = document.createElement("tr");
  coche.fila = row;
  row.dataset.idCoche = coche.id;
  row.innerHTML = `
        <td>${coche.marca}</td>
        <td>${coche.modelo}</td>
        <td>${coche.km}</td>
        <td>
            <button>Seleccionar</button>
            <button>Mover</button>
            <button>Editar</button>
            <button>Eliminar</button>
        </td>
    `;
  const tabla = document.getElementById("tablaCoches");
  tabla.appendChild(row);

  const botones = row.getElementsByTagName("button");

  const buttonSeleccionar = botones[0];
  buttonSeleccionar.onclick = onClickSeleccionarCoche;

  const buttonMover = botones[1];
  buttonMover.onclick = onClickMoverCoche;

  const buttonEditar = botones[2];
  buttonEditar.onclick = editarCoche;

  const buttonEliminar = botones[3];
  buttonEliminar.onclick = eliminarCoche;
}

function editarCoche(event) {
  const el = event.currentTarget.parentNode.parentNode;

  console.log(document.getElementById("formNuevoCoche").elements);

  marca = el.getElementsByTagName("td")[0];
  modelo = el.getElementsByTagName("td")[1];
  km = el.getElementsByTagName("td")[2];

  boton = el.getElementsByTagName("button")[2];
  boton.innerHTML = "Guardar";
  boton.onclick = guardarCoche;

  marca.innerHTML = `<input value="${marca.innerHTML}" required>`;
  modelo.innerHTML = `<input value="${modelo.innerHTML}" required>`;
  km.innerHTML = `<input value="${km.innerHTML}" type="number" required>`;
}

function guardarCoche(event) {
  const el = event.currentTarget.parentNode.parentNode;

  marca = el.getElementsByTagName("td")[0];
  marcaInput = marca.getElementsByTagName("input")[0];

  modelo = el.getElementsByTagName("td")[1];
  modeloInput = modelo.getElementsByTagName("input")[0];

  km = el.getElementsByTagName("td")[2];
  kmInput = km.getElementsByTagName("input")[0];

  boton = el.getElementsByTagName("button")[2];
  boton.innerHTML = "Editar";
  boton.onclick = editarCoche;

  marca.innerHTML = `<td>${marcaInput.value}</td>`;
  modelo.innerHTML = `<td>${modeloInput.value}</td>`;
  km.innerHTML = `<td>${kmInput.value}</td>`;

  cocheSave = coches.find((_) => _.id == el.dataset.idCoche);

  cocheSave.marca = marcaInput.value;
  cocheSave.modelo = modeloInput.value;
  cocheSave.km = Number(kmInput.value);
}

function eliminarCoche(event) {
  const el = event.currentTarget.parentNode.parentNode;
  el.remove();
  coches = coches.filter((_) => _.id != el.dataset.idCoche);
}

function onClickSeleccionarCoche(event) {
  const boton = event.currentTarget;
  const tdBoton = boton.parentNode;
  const filaCoche = tdBoton.parentNode;
  // ----- PEOR OPCIÓN ----
  // filaCoche.setAttribute('style', 'background-color: red; color:white;');
  // ---- OPCIÓN CUTRE ----
  // if(filaCoche.style.backgroundColor === 'red'){
  //     filaCoche.style.backgroundColor = 'white';
  //     filaCoche.style.color = 'black';
  // }
  // else {
  //     filaCoche.style.backgroundColor = 'red';
  //     filaCoche.style.color = 'white';
  // }
  // ---- MEJOR OPCIÓN -----
  filaCoche.classList.toggle("seleccionado");
}

function onClickMoverCoche(event) {
  const buttonMover = event.currentTarget;
  const tdBotones = buttonMover.parentNode;

  const filaCoche = tdBotones.parentNode;
  const idCoche = filaCoche.dataset.idCoche;

  const formMoverCoche = document.forms.formMoverCoche;
  formMoverCoche.classList.remove("oculto");
  formMoverCoche.dataset.idCoche = idCoche;
}

function onSubmitMoverCoche(event) {
  event.preventDefault();
  const form = event.currentTarget;
  const idCoche = parseInt(form.dataset.idCoche);
  // delete form.dataset.idCoche;
  const kmMover = parseInt(form.elements.inputKmMover.value);

  coche = coches.filter((_) => _.id != idCoche);

  const tablaCoches = document.getElementById("tablaCoches");
  const filasCoche = tablaCoches.getElementsByTagName("tr");
  let fila;
  for (fila of filasCoche) {
    if (fila.dataset.idCoche == idCoche) break;
  }

  const celdas = fila.getElementsByTagName("td");
  const tdKm = celdas[2];
  const kmActuales = parseInt(tdKm.innerHTML);
  tdKm.innerHTML = kmActuales + kmMover;

  coches.map((_) => {
    if (_.id == idCoche) {
      _.km = kmActuales + kmMover;
    }
  });

  form.classList.add("oculto");
  form.reset();
}
