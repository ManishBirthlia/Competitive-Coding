# Write your MySQL query statement below
select customer_id ,count(v.customer_id) as count_no_trans  from Visits v
left join Transactions t on t.visit_id = v.visit_id
where transaction_id is NUll
group by customer_id;