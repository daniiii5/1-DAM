let films = [
    {
        id: 1,
        name: "El Padrino",
        desc: "Prueba",
        imageid: 1,
        status: undefined,
    },
];

function maxId(array) {
    return array.reduce((max, el) => (el.id > max ? el.id : max), 0);
}

document.addEventListener("DOMContentLoaded", (event) => {
    loadFilms();

    document.querySelectorAll(".circle").forEach((element) => {
        element.addEventListener("click", (_) => {
            buttonClick(_.target.innerHTML);
        });
    });

    document.forms["film-form"].onsubmit = formSubmit;
    document.querySelector("#form-close").onclick = closeMenu;
});

function filmActions(event) {
    const filmid = parseInt(event.target.parentNode.parentNode.dataset.id);
    const action = event.originalTarget.id;
    console.log(action);
    if (action === "delete") {
        films = films.filter((_) => _.id != filmid);
    } else if (action === "seen" || action === "pending") {
        films.find((_) => _.id === filmid).status = action;
    }
    update();
    loadFilms();
}

function formSubmit(event) {
    event.preventDefault();
    const formEls = event.target.elements;
    console.log(formEls);
    films.push({
        id: maxId(films) + 1,
        name: formEls["film-name"].value,
        desc: formEls.textarea.value,
        imageid: parseInt(formEls["film-image"].value),
        status: undefined,
    });
    console.log(films);
    closeMenu();
}
function buttonClick(type) {
    if (type === "+") {
        showMenu();
    } else {
        films = [];
        update();
    }
}
function showMenu() {
    document.querySelector(".menu-bg").style.display = "flex";
}
function closeMenu() {
    document.querySelector(".menu-bg").style.display = "none";
    document.forms["film-form"].reset();
    update();
}
function loadFilms() {
    films = JSON.parse(localStorage.getItem("films")) || films;
    let filmsElement = document.querySelector(".films");
    filmsElement.innerHTML = films.map((_) => createFilmElement(_)).join("");

    document
        .querySelectorAll(".actions")
        .forEach((_) => _.addEventListener("click", filmActions));
}
function createFilmElement(film) {
    return `
    <div data-id="${film.id}" class="film ${film.status ? film.status + "-film" : ""}">
        <div class="image">
            <img src="./images/${film.imageid}.jpg" alt="${film.name}" />
        </div>
        <div class="info">
            <div class="title">${film.name}</div>
            <div class="description">${film.desc}</div>
        </div>
        <div class="actions">
            <div class="seen" id="seen" >Marcar como vista</div>
            <div class="pending" id="pending" >Marcar como pendiente</div>
            <div class="delete" id="delete" >Eliminar</div>
        </div>
    </div>`;
}
function update() {
    localStorage.setItem("films", JSON.stringify(films));
    loadFilms();
}
