-- Reescribe los nombres de los actores con un formato en el que aparezca la inicial del nombre seguida de un punto y su apellido (El apellido deben estar en modo INITCAP)
-- Ej: STEVEN SEAGAL -----> S. Seagal
--      UMA TRUMAN -----> U. Truman
use sakila;

select CONCAT(SUBSTR(first_name, 1,1), ". ", UPPER(SUBSTR(last_name,1,1)), LOWER(SUBSTR(last_name,2))) AS "fullName"
from actor
;

-- Introduce por la derecha un numero de '@' al titulo de las películas equivalente a la cuarta parte de su duración.
select rpad(title, length(title)+(length/4), "@")
from film
;

-- Sustituye la palabra 'Drama' por 'Love Story' en todas las sinopsis de las películas cuya duración sea inferior a 100 y su título contenga una 'E'
select replace(description, "Drama", "Love Story") as "synopsis"
from film
where length < 100 && title like "%E%"
;

-- Introduce en la sinopsis de películas para público adulto (R) sin Comentarios ni 'Behind the Scenes' la palabra 'Bloody' justo entre la 'A' inicial y la segunda palabra de la sinopsis.
select concat(substr(description, 1, 2), "Bloody", substr(description,2))
from film
where rating like "R" && special_features not like "%Commentaries%" && special_features not like "%Behind the Scenes%"
;

-- Consigue que la primera mitad de las letras del título de una película estén en mayúsculas y la segunda mitad en minúsculas.
-- Ejemplo:  ACADEMY DINOSAUR  ------------> ACADEMY dinosaur
select concat(upper(substr(title, 1, length(title)/2)), lower(substr(title, length(title)/2)))
from film
;

-- Devuelve los alquileres del 30 y el 31 de Mayo del 2005 gestionados por el empleado 2 del videoclub
select *
from rental
where staff_id like "2" && rental_date like "%2005-05-30%" || rental_date like "%2005-05-31%"
;

-- Devuelve las direcciones (solo la columna de la direccion) de aquellas cuyos teléfonos NO contengan el numero '1'
select address
from address
where phone not like "%1%"
;

-- Filtra para que aparezca(n) la(s) ciudad(es) de la tabla city de sakila que contiene(n) un 
-- carácter '/'. A continuación devuelve el nombre de esa ciudad con '#' por la izquierda 
-- equivalentes al numero de letras que estaban a la izquierda de la barra y un numero de '@' 
-- equivalentes al numero de letras que estaban a la derecha de la barra.
select concat(
lpad(substr(city, 1, instr(city, "/")-1), length(substr(city, 1, instr(city, "/")-1))*2, "#"),
"/",
rpad(substr(city, instr(city, "/")+1), length(substr(city, instr(city, "/")+1))*2, "@"))
as "city"
from citys
where city like "%/%"
;