/*
3. SQL Constraints
Lab 1: Create a table teachers with the following columns: teacher_id (Primary Key), teacher_name (NOT NULL), subject (NOT NULL), and email (UNIQUE). 
 Lab 2: Implement a FOREIGN KEY constraint to relate the teacher_id from the teachers table with the students table.
*/

CREATE DATABASE school_db;

CREATE TABLE students(
    student_id INT PRIMARY KEY,
    student_name VARCHAR(25) NOT NULL,
    age INT NOT NULL,
    class VARCHAR(2) NOT NULL,
    address VARCHAR(25) NOT NULL,
    Foreign Key (student_id) REFERENCES TEACHERS(teacher_id)
);

CREATE TABLE TEACHERS(
    teacher_id int PRIMARY KEY,
    teacher_name VARCHAR(25) NOT NULL,
    email VARCHAR(50) UNIQUE
);
