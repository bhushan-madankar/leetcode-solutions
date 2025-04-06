# Write your MySQL query statement below
WITH temp AS
(SELECT visited_on, SUM(amount) AS amount FROM Customer GROUP BY visited_on) 
SELECT visited_on, SUM(amount) OVER (ORDER BY visited_on ROWS BETWEEN 6 PRECEDING AND CURRENT ROW) AS amount, 
       ROUND(AVG(amount) OVER (ORDER BY visited_on ROWS BETWEEN 6 PRECEDING AND CURRENT ROW),2) AS average_amount
FROM temp
ORDER BY visited_on
LIMIT 6, 18446744073709551615