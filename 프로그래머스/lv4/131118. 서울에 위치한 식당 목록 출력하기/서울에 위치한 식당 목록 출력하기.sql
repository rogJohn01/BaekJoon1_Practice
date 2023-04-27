select
    A.REST_ID,
    A.REST_NAME,
    A.FOOD_TYPE,
    A.FAVORITES,
    A.ADDRESS,
    ROUND(AVG(B.REVIEW_SCORE),2) AS SCORE  
from
    REST_INFO A, REST_REVIEW B
where
    A.REST_ID = B.REST_ID and
    A.ADDRESS LIKE "서울%"
group by A.REST_ID
ORDER BY SCORE DESC ,A.FAVORITES DESC