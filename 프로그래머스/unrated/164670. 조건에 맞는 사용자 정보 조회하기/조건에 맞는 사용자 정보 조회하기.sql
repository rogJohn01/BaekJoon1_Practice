-- 코드를 입력하세요
SELECT u.user_id , u.nickname  , concat(city," " , street_address1 ," " , street_address2 ) as 전체주소 , concat(substr(TLNO , 1,3) ,'-' , substr(TLNO , 4,4) , '-', substr(TLNO , 8,4 )) as 전화번호  from used_goods_board b left join used_goods_user u
on b.writer_id = u.user_id 
group by b.writer_id 
having count(board_id) >=3 
order by b.writer_id desc 