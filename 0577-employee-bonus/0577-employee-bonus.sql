# Write your MySQL query statement below
select Employee.name,Bonus.bonus from employee
LEFT JOIN Bonus ON Employee.empID=Bonus.empID
Where bonus<1000 or Bonus is null;