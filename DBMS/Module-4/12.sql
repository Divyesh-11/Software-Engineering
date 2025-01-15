/*
12. SQL Group By
Lab 1: Group employees by department and count the number of employees in each department using GROUP BY.
Lab 2: Use the AVG aggregate function to find the average salary of employees in each department.
*/
SELECT department_id, count(department_id) FROM employees GROUP BY department_id;

SELECT department_id, avg(salary) FROM employees GROUP BY department_id;