-- 코드를 입력하
SELECT  u.user_id , u.nickname , sum(b.price) as total_sales from used_goods_board b left join used_goods_user u 
on b.writer_id = u.user_id
where b.status like "done"
group by b.writer_id
having sum(b.price) >= 700000
order by sum(b.price) asc 