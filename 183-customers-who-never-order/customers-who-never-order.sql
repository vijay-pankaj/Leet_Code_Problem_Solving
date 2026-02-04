# Write your MySQL query statement below
-- select c.name as Customers from Customers c left join Orders o on c.id=o.customerId where o.customerId is null;

SELECT c.name AS Customers
FROM Customers c
WHERE NOT EXISTS (
    SELECT 1
    FROM Orders o
    WHERE o.customerId = c.id
);
