SELECT b.title  , b.board_id, r.reply_id , r.writer_id , r.contents , date_format(b.created_date , '%y-%m-%m') as created_date  from used_goods_board b right join  used_goods_reply r
on r.board_id = b.board_id 
where  r.created_date like '2022-10%'
order by r.created_date asc , b.title asc