# Write your MySQL query statement below
select e.name , b.bonus from Employee e
left join Bonus b on b.empId=e.empId
having b.bonus<1000 or b.bonus IS NULL;