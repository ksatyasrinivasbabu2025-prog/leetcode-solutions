# Write your MySQL query statement below
with cte as (
    Select *, id-row_number() over() as id_diff
    from stadium where people>99
)

Select id, visit_date, people
from cte 
where id_diff in (select id_diff from cte group by id_diff having count(*)>2 order by visit_date);