create role Student;

create user Divyesh identified by "dk@12345" default role Student;

grant select on employees to Divyesh;

revoke select on employees from Divyesh;

grant select,delete on employees to Divyesh; 

select * from employees;
rollback;

select * from employees;

revoke delete on employees from Divyesh;

select * from employees;