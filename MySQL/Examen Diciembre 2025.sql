use sakila;

# Devuelve el titulo y el año de lanzamiento de las peliculas cuyo coste de reemplazo
# sea inferior a 20 y que su titulo empiece por la letra S.alter

select title, release_year
from film
where replacement_cost < 20 && title like "%S"
;


# Devuelve la sinopsis que contengan la palabra Monkey, reemplaza dicha 
# palabra por Bicho, pero solo de aquellas peliculas que contentan Trailers

select replace(description, "Monkey", "Bicho") as description
from film
where special_features like "%Trailers%"
;


# Devuelve el titulo de todas las peliculas con su calificacion de edades concatenada
# al principio y que todo eso este rodeado de tantas '#' como la mitad de la longitud 
# en caracteres de dicho titulo

select concat(
	repeat("#", (length(title)/2)), 
	rating,
	title, 
	repeat("#", (length(title)/2))
    ) as title
from film
;


# En la tabla 'rental', considerando que devolver una pelicula 'realmente tarde' es 
# que haya una diferencia de mas de 7 dias entre la fecha de alquiler y la fecha de 
# devolucion, muestra el id y la fecha de dichos alquileres devueltos 
# 'realmente tarde' y gestionados por el 'staff_id = 1'

select rental_id, rental_date
from rental
where datediff(return_date, rental_date) > 7 && staff_id = 1
;

