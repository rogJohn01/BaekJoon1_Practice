-- 코드를 입력하세요
SELECT dr_name , dr_id , mcdp_cd , date_format(hire_ymd , "%Y-%m-%d" ) from doctor 
where mcdp_cd like "%cs%" or mcdp_cd like "%gs%"
order by hire_ymd desc , dr_name asc 