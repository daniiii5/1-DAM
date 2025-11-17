-- Devuelve la población diezmada de aquellos países que no tengan cabeza de estado
-- o cuya superficie sea inferior a 2.000.000
-- muestra también una columna con el nombre de dichos paises concatenando su año de independencia
-- con un guion bajo, y todo valor de esa misma columna rodeada por '#' tantas como letras tenga su forma de gobierno





use world;
select concat(
repeat('#', length(concat(Name, "_", Population/10, "_", IndepYear))), 
Name, 
"_", 
Population/10, 
"_", 
IndepYear, 
repeat('#', length(concat(Name, "_", Population/10, "_", IndepYear)))) as title
from country
where HeadOfState = '' || SurfaceArea < 2000000
;