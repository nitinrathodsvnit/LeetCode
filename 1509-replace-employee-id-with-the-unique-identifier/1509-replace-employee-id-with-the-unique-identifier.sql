# Write your MySQL query statement below
SELECT u.unique_id, e.name FROM EmployeeUNI as u 
RIGHT JOIN Employees as e ON e.id = u.id