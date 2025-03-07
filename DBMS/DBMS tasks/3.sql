CREATE DATABASE COLLAGE;

CREATE TABLE STUDANT(
    ROLL_NO INT PRIMARY KEY,
    NAME VARCHAR(50) NOT NULL,
    GRADE VARCHAR(1) NOT NULL,
    MARKS INT NOT NULL,
    CITY VARCHAR(25) NOT NULL
);
INSERT INTO studant (`ROLL_NO`,`NAME`,`MARKS`,`GRADE`,`CITY`) VALUES
(101,"ANIL",78,"C","PUNE"),
(102,"BHUMIKA",93,"A","MUMBAI"),
(103,"CHETAN",85,"A","MUMBAI"),
(104,"DHRUV",96,"A","DELHI"),
(105,"EMANAUL",12,"F","DELHI"),
(106,"FARAN",82,"B","DELHI");

SELECT * FROM studant;

SELECT * FROM studant WHERE `MARKS` > 80;

SELECT * FROM studant WHERE `CITY`= "MUMBAI";

SELECT city,COUNT(`ROLL_NO`)FROM studant GROUP BY `CITY`;

SELECT city, AVG(MARKS) FROM studant GROUP BY `CITY` ORDER BY AVG(`MARKS`);

SELECT city, COUNT(`NAME`) FROM studant GROUP BY `CITY` HAVING MAX(`MARKS`) > 90;

SELECT `CITY` FROM studant WHERE `GRADE` = "A" GROUP BY `CITY` HAVING MAX(`MARKS`) >= 93 ORDER BY `CITY` ASC;

UPDATE studant SET `GRADE` = "O" WHERE `GRADE` = "A";

SELECT * FROM studant;  

UPDATE studant SET `GRADE` = "A" WHERE `GRADE` = "O";

SELECT * FROM studant;

alter table studant add column age int not null default 19;

select * from studant;

alter table studant modify column age varchar(2) not null default 19;

select * from studant;

alter table studant change age stu_age int;

select* from studant;

alter table studant drop column stu_age;

select * from studant;

alter table studant drop column age; 

select * from studant;

alter table studant rename to student;

select * from student;

alter table student change name fullname varchar(25);

select * from student; 

delete from student where marks < 80; 

alter table student drop column grade;