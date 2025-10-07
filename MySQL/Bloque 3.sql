use world;
-- insertar
-- introducir un pais ficticio con todos los valores de campo

insert into country(Code, Name, Continent, Region, SurfaceArea, IndepYear, Population, GNP, GNPOld)
values("WKN", "Wakanda", "North America", "North America", "121408", "2025", "2141256952", "451235", "1546136")
;

-- introducir una ciudad ficticia con todos los valores de campo
-- que pertenezca a dicho pais

insert into city(name, CountryCode, District, Population)
values("Birnin Zana", "WKN", "Northern", "34325164")
;

select *
from city
;
