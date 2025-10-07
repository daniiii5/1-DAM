use sakila;

-- DML (Data Manipulation Language)
-- INSERT
-- Añade valores a la tabla
insert into actor(actor_id,first_name,last_name,last_update)
	values(201, "Daniel","Quddus","2006-01-24 00:00:00")
;
    
insert into actor(first_name,last_name)
	values("Sephie","Turner")
;

-- UPDATE
update actor set last_name = "TURNER"
where actor_id = 202
;

-- DELETE
delete from actor
where actor_id = 201;

select *
from actor;