let tutoriasObject = [];
let alumnosObject = [
    { id: 1, nombre: "Alice" },
    { id: 2, nombre: "Bob" },
    { id: 3, nombre: "Tim Berners-Lee" },
];

tutoriasObject =
    JSON.parse(localStorage.getItem("tutoriasObject")) || tutoriasObject;
alumnosObject =
    JSON.parse(localStorage.getItem("alumnosObject")) || alumnosObject;

document.addEventListener("DOMContentLoaded", function () {
    loadalumnosObjectDropdown(alumnosObject);
    document.forms.alumnoForm.onsubmit = onSubmit;
    drawTable(
        alumnosObject,
        tutoriasObject,
        document.getElementById("tablaCuerpo"),
    );

    document.getElementById("cerrarModal").addEventListener("click", () => {
        document.getElementById("diag").style.display = "none";

        const tutoriaId = document.getElementById("diag").dataset.tutoria;
        const tutoriaElement = tutoriasObject.find(
            (t) => t.id === parseInt(tutoriaId),
        );
        tutoriaElement.comentarios = document.getElementById("datoInput").value;
        updateData();
    });
});

function loadalumnosObjectDropdown(alumnosObject) {
    let dorpdownForm = document.getElementById("alumnosDropdown");
    for (const alumno of alumnosObject) {
        let optionDropdownForm = document.createElement("option");
        optionDropdownForm.value = alumno.id;
        optionDropdownForm.innerHTML = alumno.nombre;
        dorpdownForm.appendChild(optionDropdownForm);
    }
}

function onSubmit(event) {
    event.preventDefault();
    const form = event.currentTarget;

    addTutoria(tutoriasObject, form[0].value, form[1].value);

    form.reset();
    drawTable(
        alumnosObject,
        tutoriasObject,
        document.getElementById("tablaCuerpo"),
    );
}

function addAlumno(alumnosObject, nombre) {
    const idAlumno = parseInt(maxId(alumnosObject) + 1);
    alumnosObject.push({
        id: idAlumno,
        nombre: nombre,
    });
    updateData();
}

function addTutoria(tutorias, idAlumno, fecha, estado = 0, comentarios = "") {
    const maxIdTutoria = parseInt(maxId(tutorias) + 1);
    tutorias.push({
        id: parseInt(maxIdTutoria),
        fecha: fecha,
        estado: estado,
        alumno: parseInt(idAlumno),
        comentarios: comentarios,
    });
    updateData();
}

function maxId(array) {
    return array.reduce((max, el) => (el.id > max ? el.id : max), 0);
}

function drawTable(alumnosObject, tutorias, tbody) {
    tbody.innerHTML = "";
    for (const tutoria of tutorias) {
        const row = document.createElement("tr");
        const alumno = document.createElement("td");
        alumno.innerHTML = alumnosObject.find(
            (_) => _.id === tutoria.alumno,
        ).nombre;

        const fecha = document.createElement("td");
        fecha.innerHTML = tutoria.fecha;

        const estado = document.createElement("td");
        estado.innerHTML = tutoria.estado === 0 ? "Pendiente" : "Completado";
        estado.classList.add(
            tutoria.estado === 0 ? "estado-pendiente" : "estado-completado",
        );

        const acciones = document.createElement("td");
        const botones = [
            {
                name: tutoria.estado === 0 ? "Completar" : "Ver",
                action: completeTutoria,
                style: "btn-completar",
            },
            {
                name: "Eliminar",
                action: removeTutoria,
                style: "btn-eliminar",
            },
        ];

        for (const btn of botones) {
            const boton = document.createElement("button");
            boton.innerHTML = btn.name;
            boton.onclick = btn.action;
            boton.classList.add(btn.style);
            acciones.appendChild(boton);
        }

        row.appendChild(alumno);
        row.appendChild(fecha);
        row.appendChild(estado);
        row.appendChild(acciones);
        row.dataset.tutoria = tutoria.id;

        tbody.appendChild(row);
    }
    updateData();
}

function completeTutoria(event) {
    const row = event.target.closest("tr");
    const tutoriaId = parseInt(row.dataset.tutoria);
    const tutoriasElement = tutoriasObject.find((_) => _.id === tutoriaId);

    document.getElementById("diag").style.display = "flex";
    document.getElementById("diag").dataset.tutoria = tutoriaId;
    document.getElementById("datoInput").value = tutoriasElement.comentarios;

    tutoriasElement.estado = 1;

    updateData();
    drawTable(
        alumnosObject,
        tutoriasObject,
        document.getElementById("tablaCuerpo"),
    );
}

function removeTutoria(event) {
    const row = event.target.closest("tr");
    const tutoriaId = parseInt(row.dataset.tutoria);

    tutoriasObject = tutoriasObject.filter((_) => _.id !== tutoriaId);

    updateData();
    drawTable(
        alumnosObject,
        tutoriasObject,
        document.getElementById("tablaCuerpo"),
    );
}

function updateData() {
    localStorage.setItem("alumnosObject", JSON.stringify(alumnosObject));
    localStorage.setItem("tutoriasObject", JSON.stringify(tutoriasObject));
}
