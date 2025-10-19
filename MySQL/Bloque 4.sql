-- Nombres y poblacion de paises que teniendo una superficie superior a 20M, su esperanza de vida sea comprendida entre los 50 y 80 años.

use world;

select Name,Population
from country
where SurfaceArea > 20000000 && LifeExpectancy < 80 && LifeExpectancy > 50
;

-- Nombre y sinopsis de Peliculas que contengan Comentarios o duren mas de 80 minutos pero que si o si en la sinopsis aparezca la palabra Cat.

use sakila;

select title,description
from film
where length > 80 && description like "*Cat*" || special_features like "*Commentaries*" && description like "*Cat*"
;

-- Ciudades del mundo cuyo codigo del pais empiece por 'E'
-- o su poblacion sea par
-- Descarta también aquellas cuyo codigo de pais empiece por 'K'

use world;

select *
from city
where Population % 2 = 0 && CountryCode not like "K*" || CountryCode like "E*" && CountryCode not like "K*"
;