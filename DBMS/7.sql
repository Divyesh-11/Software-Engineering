create table dept(
id int primary key,
name varchar(25) not null
);

insert into dept values 
(101, "English"),
(102 , "IT"),
(103, "Gujrati");

create table teacher(
id int primary key,
name varchar(20) not null,
dept_id int not null,
 foreign key (dept_id) references dept(id)
 on update cascade
 on delete cascade
);

insert into teacher values 
(1,"dipati",101),
(2,"Sonali",102),
(3,"Mahesh",102);


select * from dept;

select * from teacher;

update dept set id = 111 where id = 101;

select * from dept;

select * from teacher;

-- select * from dept inner join teacher on dept.dept_id = teacher.dept_id;