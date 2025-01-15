/*
6. DROP Command
Lab 1: Drop the teachers table from the school_db database. 
Lab 2: Drop the students table from the school_db database and verify that the table has been removed.
*/

SHOW CREATE TABLE students;

ALTER TABLE students MODIFY student_id INT NOT NULL;    
ALTER TABLE students
DROP FOREIGN KEY student_id REFERENCES teachers(teacher_id);
DROP TABLE teachers;