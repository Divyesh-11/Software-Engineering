create schema 15_octomber;

create table employees (
    employees_id int unique not null,
    first_name varchar(50) unique not null,
    last_name varchar(50) unique not null,
    hire_date date not null,
    salary int not null,
    commission_pct float,
    manager_id int,
    department_id int not null
);

insert into employees value 
    (100,'Steven','King','1987-07-17',24000,null,null,90),
    (101,'Neena','Kochhar','1989-09-21',17000,null,100,90),
    (102,'lex','De Haan','1993-01-13',17000,null,100,90),
    (103,'Alexander','Hunold','1990-01-03',9000,null,102,60),
    (104,'Bruce','Ernst','1991-05-21',6000,null,103,60),
    (107,'Dlane','Lorentz','199-02-07',4200,null,103,60),
    (124,'Kevin','Mourgos','1999-11-16',5800,null,100,50),
    (141,'Trenna','Rajs','1995-10-17',3500,null,124,50),
    (142,'Curtis','Davies','1997-01-29',3100,null,124,50),
    (143,'Randil','Matos','1998-03-15',2600,null,124,50),
    (144,'Peter','Vargas','1998-07-09',2500,null,124,50),
    (149,'Eleni','Zlotkey','2000-01-29',10500,0.2,100,80),
    (174,'Ellen','Abel','1996-05-11',11000,0.4,149,80),
    (176,'Jonathon','Taylor','1998-03-24',8600,0.5,149,80),
    (178,'Kimerely','Grant','1999-05-24',7000,0.1,149,NULL),
    (200,'Jennifer','Whalen','1987-09-17',4400,null,101,10),
    (201,'Michael','Hartstein','1996-02-17',13000,null,100,20),
    (202,'PAt','Fay','1997-08-17',6000,null,201,20),
    (205,'Shelley','Higgins','1994-06-07',12000,null,101,110),
    (206,'William','Gletz','1994-06-07',8300,null,205,110);
select * from employees;
/*
describe employees;
-- modify column
alter table employees modify hire_date date;

alter table employees modify hire_date date not null;

alter table employees modify department_id int;

alter table employees modify first_name varchar(50) not null;

alter table employees modify last_name varchar(50) not null;

describe employees;

-- rename table
alter table employees rename to emp_table;

describe emp_table;

alter table emp_table rename to employees;

describe employees;

-- rename column
alter table employees rename column salary to income;

describe employees;

alter table employees rename column income to salary;

describe employees;

-- add column to end

alter table employees add column job_time time not null;

describe employees;

-- add column to specific posotion

alter table employees add column job_id int not null after hire_date;

describe employees;

-- deleter column

alter table employees drop column job_time;

alter table employees drop column job_id;

describe employees;

select * from employees;

alter table employees modify hire_date varchar(25) not null;

update employees set hire_date = date_format(hire_date,"%d-%b-%YY");

select * from employees;

update employees set hire_date = date_format(hire_date,"%d/%b/%Y");

truncate employees;
*/