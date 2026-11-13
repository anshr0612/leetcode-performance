# Write your MySQL query statement below
select t.id from weather t, weather y
where DATEDIFF(t.recorddate,y.recorddate)=1 and t.temperature > y.temperature;