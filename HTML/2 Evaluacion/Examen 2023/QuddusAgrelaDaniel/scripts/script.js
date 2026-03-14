const sets = JSON.parse(localStorage.getItem("sets")) || [
    {
        id: 1,
        type: "Blando",
        maxDeg: 50,
    },
    {
        id: 2,
        type: "Medio",
        maxDeg: 100,
    },
    {
        id: 3,
        type: "Duro",
        maxDeg: 150,
    },
];

const racesBase = JSON.parse(localStorage.getItem("racesBase")) || [
    {
        id: 1,
        name: "GP Baréin",
        laps: 57,
        deg: 5,
        sets: [
            {
                id: 1,
                type: "Blando",
                maxDeg: 50,
            },
        ],
    },
    {
        id: 2,
        name: "GP Arabia Saudí",
        laps: 50,
        deg: 3,
        sets: [],
    },
];

document.addEventListener("DOMContentLoaded", (event) => {
    loadCircuits();

    document
        .querySelector(".menu-options")
        .addEventListener("click", tyreOption);
});

function openMenu(event) {
    loadTyres(event.target.parentElement.parentElement.dataset.id);
    document.querySelector(".menu-bg").style.display = "block";
    document.querySelector(".menu").style.display = "block";
}

function closeMenu() {
    document.querySelector(".menu-bg").style.display = "none";
    document.querySelector(".menu").style.display = "none";
}

function tyreOption(event) {
    if (event.target.id != "close-menu") {
        console.log(event.target.dataset.id);
        console.log(event.target.id);
        racesBase
            .find((_) => _.id === parseInt(event.target.dataset.id))
            .sets.push(
                sets.find(
                    (_) => _.type.toLocaleLowerCase() === event.target.id,
                ),
            );

        loadCircuits();
        closeMenu();
    } else {
        closeMenu();
    }
}

function closeTyreMenu(event) {
    document.querySelector(".menu-bg").style.display = "none";
    document.querySelector(".menu").style.display = "none";
}

function loadCircuits() {
    const circuitos = document.querySelector(".ajustes");
    circuitos.innerHTML = racesBase
        .map((el) => createCircuitElement(el))
        .join("\n");

    document.querySelectorAll("#add-btn").forEach((element) => {
        console.log(element);
        element.addEventListener("click", openMenu);
    });
    update();
}

function createCircuitElement(base) {
    console.log(base.sets.length);
    let setsdiv;
    if (base.sets.length > 0) {
        setsdiv = base.sets.map((el) => {
            return `<div class="border llanta">
            <div>${el.type}</div>
            <div>${Math.round(el.maxDeg / base.deg)}</div>
        </div>`;
        });
        setsdiv =
            `<div class="llantas item-circuito">\n` +
            setsdiv.join("\n") +
            `\n</div>`;
    }

    return `<div data-id="${base.id}" class="circuito border">
        <div class="titulo-circuito">${base.name}</div>
        <div class="info-vueltas item-circuito">
            <div class="vueltas info-item border">
                <div>Vueltas</div>
                <div id="vueltas">${base.laps}</div>
            </div>
            <div class="degradacion info-item border">
                <div>Degradación/Vueltas</div>
                <div id="vueltas">${base.deg}</div>
            </div>
        </div>
        ${setsdiv || ""}
        <div class="vueltas-posibles border">
            <div>Total Vueltas Posibles</div>
            <div id="vueltas">${Math.round(
                base.sets?.reduce((acc, now) => acc + now.maxDeg, 0) / base.deg,
            )}</div>
        </div>
        <div class="add-ruedas border item-circuito">
            <div id="add-btn">Añadir Ruedas</div>
        </div>
    </div>`;
}

function loadTyres(id) {
    const tyres = document.querySelector(".menu-options");
    tyres.innerHTML =
        `<div id="close-menu" class="menu-option border">Cerrar</div>\n` +
        sets
            .map(
                (el) =>
                    `<div class="menu-option border" data-id="${id}" id="${el.type.toLowerCase()}">${el.type}</div>`,
            )
            .join("\n");
    update();
}

function update() {
    localStorage.setItem("racesBase", JSON.stringify(racesBase));
    localStorage.setItem("sets", JSON.stringify(sets));
}
