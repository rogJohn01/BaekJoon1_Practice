SELECT b.title  , b.board_id, r.reply_id , r.writer_id , r.contents , date_format(r.created_date , '%Y-%m-%d') as created_date  from used_goods_board b  join  used_goods_reply r
on r.board_id = b.board_id 
where  b.created_date like '2022-10%' 
order by r.created_date asc , b.title asc