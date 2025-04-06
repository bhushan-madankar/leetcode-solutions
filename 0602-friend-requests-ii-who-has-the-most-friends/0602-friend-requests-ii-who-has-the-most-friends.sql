# Write your MySQL query statement below
Select requester_id as id, count(*) as num from 
    (select requester_id from RequestAccepted
    union all
    Select accepter_id as requester_id
    from RequestAccepted
    ) as A
group by requester_id
order by num desc
limit 1