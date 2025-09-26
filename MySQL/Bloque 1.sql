use sakila;
-- Devolver nombre y apellido de los actores que se apelliden SMITH
select first_name, last_name
from actor
where last_name like "%SMITH%"
;
-- Devolver titulo de peliculas que duren más de 120
-- o que tengan calificacion de edad PG-13
select title
from film
where length > 120 or rating = "PG-13"
;
-- Devolver titulo, duracion y coste de reemplazamiento de peliculas que duren entre 30 y 60,
-- que hayan sido lanzadas despues de 1990 o su calificacion de edad sea 'R'
select title, rental_duration, replacement_cost
from film
where length >= 30 and length <= 60 and release_year > 1990 or rating = "R"
;
-- Devolver titulo y año de lanzamiento de peliculas en cuya descripcion aparezca al menos una vez la
-- palabra "Chef"
select title, release_year
from film
where description like "%chef%"
;
-- Devolver precio de alquiler de peliculas de calificación 'G' y que contengan 'Escenas Eliminadas'
select rental_rate
from film
where rating = "G" and special_features like "%Deleted Scenes%"
;