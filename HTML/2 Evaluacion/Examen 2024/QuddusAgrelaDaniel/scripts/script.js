const CARGA_MAXIMA = 1050000;
const PRECIO_POR_KG = 250;

let cargas = [
    {
        id: 1,
        nombre: "La Copa del Rey del Betis",
        masa: 50,
        precio: 50 * PRECIO_POR_KG,
    },
    {
        id: 2,
        nombre: "Una de las 4 ruedas del RedBull",
        masa: 33,
        precio: 33 * PRECIO_POR_KG,
    },
    {
        id: 3,
        nombre: "Huesos de los jamones necesarios para aprobar",
        masa: 25000,
        precio: 25000 * PRECIO_POR_KG,
    },
    {
        id: 4,
        nombre: "Todas las excusas de Xavi",
        masa: 75000,
        precio: 75000 * PRECIO_POR_KG,
    },
    {
        id: 5,
        nombre: "Los alumnos que suspendieron por no gastarse el dinero en jamones",
        masa: 15000,
        precio: 15000 * PRECIO_POR_KG,
    },
];

function update() {
    localStorage.setItem("cargas", JSON.stringify(cargas));
}

document.addEventListener("DOMContentLoaded", (event) => {
    cargas = JSON.parse(localStorage.getItem("cargas")) || cargas;
    loadSize();
    document.querySelector(".cargas").addEventListener("click", (event) => {
        if (event.originalTarget.dataset.id) {
            cargas = cargas.filter(
                (carga) =>
                    carga.id != parseInt(event.originalTarget.dataset.id),
            );
            loadSize();
        }
    });

    document.querySelector("#show-form").addEventListener("click", (event) => {
        console.log(event);
        showForm();
    });

    document.querySelector(".formulario").onsubmit = formSubmit;
});

function maxId(array) {
    return array.reduce((max, el) => (el.id > max ? el.id : max), 0);
}

function resetSizes() {
    localStorage.setItem("cargas", JSON.stringify(cargas));
}

function loadSize() {
    const datadiv = document.querySelector(".cargas");
    datadiv.innerHTML = "";
    for (const carga of cargas) {
        const element = createSizeElement(
            carga.nombre,
            carga.masa,
            carga.precio,
            carga.id,
        );
        datadiv.insertAdjacentHTML("beforeend", element);
    }
    loadInfo();
}

function loadInfo() {
    const masa = document.querySelector("#masa-data");
    masa.innerHTML = cargas.reduce((sum, el) => sum + el.masa, 0) + " KG";
    const precio = document.querySelector("#precio-data");
    precio.innerHTML = cargas.reduce((sum, el) => sum + el.precio, 0) + " €";
    const carga = document.querySelector("#carga-data");
    carga.innerHTML =
        Math.round(
            (cargas.reduce((sum, el) => sum + el.masa, 0) * 100) / CARGA_MAXIMA,
        ) + " %";

    const cargapercentage = Math.round(
        (cargas.reduce((sum, el) => sum + el.masa, 0) * 100) / CARGA_MAXIMA,
    );
    if (cargapercentage < 75 && cargapercentage > 0)
        document.querySelector(".nave").style.backgroundColor = "green";
    else if (cargapercentage < 100 && cargapercentage > 75)
        document.querySelector(".nave").style.backgroundColor = "orange";
    else if (cargapercentage > 100)
        document.querySelector(".nave").style.backgroundColor = "red";
}

function showForm() {
    document.querySelector(".info").style.display = "none";
    document.querySelector(".formulario").style.display = "flex";
}

function formSubmit(event) {
    event.preventDefault();
    console.log(event.originalTarget.elements);
    cargas.push({
        id: maxId(cargas) + 1,
        nombre: event.originalTarget.elements.nombre.value,
        masa: parseInt(event.originalTarget.elements.masa.value),
        precio:
            parseInt(event.originalTarget.elements.masa.value) * PRECIO_POR_KG,
    });
    document.querySelector(".formulario").style.display = "none";
    document.querySelector(".info").style.display = "flex";

    update();
    loadSize();
}

function createSizeElement(nombre, masa, precio, id) {
    return `
    <div class="tarjeta">
    <div class="data-titulo">
        <div></div>
        <div class="item-title">${nombre}</div>
        <div class="eliminar boton" data-id="${id}" >Eliminar</div>
    </div>
    <div class="datos">
        <div class="data-item masa">
            <div class="item-data-title">Masa Total</div>
            <div>${masa} KG</div>
        </div>
        <div class="data-item precio">
            <div class="item-data-title">Precio</div>
            <div>${precio} €</div>
        </div>
    </div>
</div>
    `;
}
