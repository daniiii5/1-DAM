USE world;

-- SELECT es una instrucción que proporciona lecturas filtradas de datos

SELECT *
FROM city
WHERE Population > 500000 and CountryCode = "ESP"
;

-- Dame los paises que tengan una esperanza de vida de mas de 75 años, 
-- que sean europeos. Devuelve solo el nombre del país,
-- y los años de esperanza de vida.

select Name, LifeExpectancy, Continent
from country
where LifeExpectancy > 75 and Continent = "Europe"
;

-- Continentes que contengan algun pais con una extension superior a 
-- 20.000.000. Solo proyectar el nombre del continente

select Continent
from country
where SurfaceArea > 2000000
;