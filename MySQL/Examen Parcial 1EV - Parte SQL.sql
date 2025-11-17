-- Devuelve la fecha de los alquileres concatenada con @ al id del cliente y el id 
-- del empleado que los etendió, siempre que la diferencia en segundos entre la fecha 
-- de alquiler y la de su devolucion sea un numero par


select concat(rental_date, "@", customer_id, "@", staff_id)
from rental
where date_format(return_date, "%S") - date_format(rental_date, "%S") % 2 = 1
;


-- Devuelve en una sola columna el nombre y apellido de los actores cuyo nombre 
-- contenga una A o que su apellido temrine en S. Logra que el nombre tenga la 
-- primera letra en mayusculas y el resto en minusculas, el apellido tambien.
select concat(
substr(first_name, 1,1), 
lower(substr(first_name, 2)), 
" ", 
substr(last_name, 1,1), 
lower(substr(last_name, 2))
) as full_name
from actor
where first_name like "A%" or last_name like "%S"
;


-- De las peliculas que tengan Escenas eliminadas y que duren mas de 100 minutos, 
-- devuelve el titulo decorado con un par de # por la derecha y por la izquierda. 
-- En otra columna, proporciona los primeros 100 primeros caracteres de su sinopsis.
select concat(repeat("@", 2), title, repeat("@", 2)), substr(description, 1, 100)
from film
where special_features like "%Deleted Scenes%" and length > 100
;


-- Devuelve el titulo, la descripción y la clasificacion de edades de peliculas 
-- tipo R, introduciendo al final de cada sinopsis la frase "And finally, everyone dies"
select title, concat(description, "And finally, everyone dies") as description, rating
from film
where rating like "R"
;

