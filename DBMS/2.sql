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

select * from studant;

select * from studnet;

drop table studnet;

select * from student; 

drop table student;

select * from employes;

drop table employes;

SELECT * FROM employees;

SELECT * FROM employees WHERE department_id = 90;

SELECT * FROM employees WHERE employees_id = 100;

SELECT * FROM employees WHERE first_name = 'bruce';

SELECT * FROM employees ORDER BY first_name;

SELECT * FROM employees ORDER BY salary;

SELECT * FROM employees ORDER BY salary DESC;

SELECT * FROM employees ORDER BY 5;

SELECT first_name,salary as income from employees ORDER BY income;

SELECT first_name,last_name,salary as income from employees ORDER BY income DESC;

SELECT first_name,last_name,hire_date as Joining_date from employees;

SELECT first_name,last_name,salary+10000 as income FROM employees ORDER BY income;

SELECT first_name,last_name,salary/30 as income from employees ORDER BY income;

SELECT first_name,last_name,salary*12 as income from employees ORDER BY income;

SELECT * FROM employees WHERE salary>10000;

SELECT * FROM employees WHERE salary>10000 AND salary<20000;

SELECT * FROM employees WHERE department_id=60;

SELECT * FROM employees WHERE department_id = 90 AND manager_id = 100;

SELECT * FROM employees WHERE salary BETWEEN 10000 AND 20000;

SELECT * FROM  employees WHERE commission_pct is NULL;

SELECT * FROM employees WHERE commission_pct is NOT NULL;

SELECT * FROM employees WHERE department_id in (60,0,50);

SELECT * FROM employees WHERE (department_id,manager_id) in ((90,100),(50,124),(60,102));

SELECT * FROM employees WHERE (department_id,manager_id) NOT in ((90,100),(50,124),(60,102));

SELECT MIN(salary) FROM employees;

SELECT MAX(salary) FROM employees;

SELECT SUM(salary) FROM employees;

SELECT COUNT(salary) FROM employees;

SELECT COUNT(department_id) FROM employees;

SELECT COUNT(manager_id) FROM employees;

SELECT COUNT(commission_pct) FROM employees;

SELECT COUNT(*) FROM employees;

SELECT department_id,MIN(salary) FROM employees GROUP BY department_id order BY MIN(salary);

SELECT department_id,MIN(salary) FROM employees GROUP BY department_id HAVING min(salary) > 15000 ORDER BY MIN(salary);

SELECT department_id,max(salary) FROM employees GROUP BY department_id HAVING MAX(salary) > 15000 ORDER BY MAX(salary);

SELECT * FROM employees ORDER BY salary DESC LIMIT 5;

SELECT * FROM employees ORDER BY salary DESC LIMIT 10 OFFSET 5;

SELECT concat(FIRST_NAME," ",LAST_NAME) AS FUL_NAME FROM employees;