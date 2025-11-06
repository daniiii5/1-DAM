-- Mostrar los nombres en minúsculas de todos los actores.

use sakila;
select lower(first_name) as first_name
from actor
;

-- Mostrar concatenada en una sola columna el id de la película seguido de ':' su titulo.

use sakila;
select concat(film_id, ":", title) as film
from film
;

-- Mostrar la tabla de las categorías adornadas con símbolos '<' y '>' en los laterales.
use sakila;
select concat("<", name, ">") as name
from category
;

-- Tres primeras letras del nombre de los actores cuyo apellido contenga una H
use sakila;
select substr(first_name, 1, 3) as first_name
from actor
where last_name like "%H%"
;

-- Mostrar todos los actores ordenados alfabéticamente por el ultimo carácter de su nombre.
use sakila;
select*
from actor
order by substr(first_name, length(first_name))
;

-- Mostrar el nombre de cada película precedido de tantas ‘#’ como la longitud de su titulo.
use sakila;
select lpad(title, length(title)*2, "#") as title
from film
;

-- Mostrar el nombre de los actores en modo INITCAP (primera Mayúsculas, segundas minúsculas) con un par de caracteres '#' por ambos lados.
use sakila;
select concat("##", SUBSTR(first_name, 1, 1), SUBSTR(lower(first_name), 2), "##") as first_name
from actor
;

-- Mostrar en una sola columna la suma del coste de reposición y el coste de alquiler de las películas.
    -- RENOMBRA esa columna como 'CosteTotalPerdida'
use sakila;
select rental_rate + replacement_cost as CosteTotalPerdida
from film
;

-- Mostrar todos los títulos de películas con todas sus vocales sustituidas por 'U'
use sakila;
select replace(replace(replace(replace(title, "O", "U"), "I", "U"), "E", "U"), "A", "U")
from film
;

-- Muestra aquellos alquileres de sakila que tengan una diferencia superior a dos días entre la fecha de alquiler y la de devolucion
use sakila;
select*
from rental
where datediff(rental_date, return_date) > 2
;

-- Suma a la fecha de alquileres que no hayan sido devueltos, 1 día 
use sakila;
update rental
set rental_date = date_add(rental_date, interval 1 day)
where return_date is NULL
;

-- Reescribe la fecha de alquileres con la siguiente forma:       Monday 24th of April
use sakila;
select concat(date_format(rental_date, "%W %D"), " of ", date_format(rental_date, "%M"))
from rental
;
