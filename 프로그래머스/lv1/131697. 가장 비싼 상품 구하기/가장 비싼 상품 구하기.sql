-- 코드를 입력하세요
SELECT price as max_price from product
where price in ( select max(price) from product)