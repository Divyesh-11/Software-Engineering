delimiter &&
create procedure data_info()
select * from employees;
end &&

call data_info;

delimiter &&
create procedure info()
select first_name,last_name from employees;
end &&

call info;

delimiter &&
create procedure informetion(in id int)
begin
select * from employees where department_id = id;
end &&

call informetion(50);

delimiter &&
create procedure view_data(in sal int,in id int)
begin
update employees set salary = sal where employees_id = id;
end &&

drop procedure view_data;

call view_data(20000,124);

select * from employees;

create view emp_data as select employees_id,first_name,last_name from employees;

select * from emp_data;

truncate employees;

select * from employees;

select first_name from employees;

select last_name,hire_date from employees;

select first_name,salary+15000 from employees;

select last_name,salary*12 as anuual_salary from employees;

select last_name,salary/30 as daily_salary from employees;

select concat(first_name," ",last_name) as full_name from employees;

select last_name,salary from employees;

select employees_id,first_name,last_name,hire_date,commission_pct,manager_id,department_id,salary*12 as annual_salary from employees ;

select first_name,salary+10000*12 as new_anual_salary from employees;

select * from employees;

select * from employees where manager_id in (100,124,149);

select * from employees where department_id in (90,110,10);

select * from employees where manager_id not in (124,149,100);

select * from employees where (department_id,manager_id) not in ((60,103),(80,149),(110,101));

select * from employees;

drop table dept;

select * from customer;

select * from orders;

alter table customer modify  column cu_id int not null;

drop table customer;

alter table orders modify  column cu_id int not null;

drop table customer;

alter table orders drop foreign key column cu_id int not null;

drop table orders;
drop table customer;