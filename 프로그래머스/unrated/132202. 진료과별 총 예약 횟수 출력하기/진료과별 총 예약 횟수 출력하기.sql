-- 코드를 입력하세요
SELECT mcdp_cd as '진료과코드', count( mcdp_cd) as '5월예약건수' from appointment 
where apnt_ymd like "2022-05%" 
group by mcdp_cd 
ORDER BY count(MCDP_CD) ASC, MCDP_CD ASC;
