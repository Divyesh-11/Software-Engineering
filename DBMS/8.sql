create table Students (
id int primary key ,
name varchar(25) not null,
english int default 0,
maths int default 0 
);

insert into students 
(id,name,english,maths) values (101,"Divyesh",59,88), (102,"Dipti",59,88),(103,"Radhika",58,55);
insert into students (id, name, english) values (104,"jagruti",59);
insert into students (id,name) values (105,"jayesh");

select * from students;

alter table students add column total int;

create trigger add_data before insert on 15_octomber.students for each row set new.total = new.english + new.maths;

truncate table students;

drop trigger add_data;

select * from students;

create table demo (
id int primary key,
name varchar(25)
);

insert into demo value (101,"Divyesh"), (102,"AShish") , (103,"Sagar"), (104,"Kuldip") ,(105,"Achal");

create table copied (
id int ,
name varchar(20),
copy_time time
);

create trigger copy after insert on 15_octomber.demo for each row insert into copied values (new.id,new.name,current_time());

select * from demo;

select* from copied;

truncate table demo;