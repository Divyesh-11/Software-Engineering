/*
8. Data Query Language (DQL)
Lab 1: Retrieve all courses from the courses table using the SELECT statement.
Lab 2: Sort the courses based on course_duration in descending order using ORDER BY.
Lab 3: Limit the results of the SELECT query to show only the top two courses using LIMIT.
*/

SELECT * FROM courses;

SELECT * FROM courses ORDER BY course_duration DESC;

SELECT * FROM courses ORDER BY course_duration DESC LIMIT 2;