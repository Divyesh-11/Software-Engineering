SELECT * FROM employees;

delete from employees where employees_id = 100;

delete from employees where employees_id = 101;

delete from employees where employees_id = 102;

rollback;

select * from employees;

delete from employees where employees_id = 103;

delete from employees where employees_id = 104;

delete from ememployeesployees where employees_id = 107;

select * from employees;

rollback;

select * from employees;

commit;

rollback;

delete from employees where employees_id = 104;

delete from employees where employees_id = 105;

delete from employees where employees_id = 107;

commit;

rollback;

select * from employees;

savepoint s1;
delete from employees where employees_id = 141;
savepoint s2;
delete from employees where employees_id = 142;
savepoint s3;
delete from employees where employees_id = 143;

select * from employees;

rollback to s2;

select * from employees; 

delete from employees where employees_id = 103;

select * from 