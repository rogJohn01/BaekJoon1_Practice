-- 코드를 입력하세요
SELECT f.flavor from first_half f left join icecream_info i
on f.flavor = i.flavor 
where i.ingredient_type like "fruit_based" 
group by f.flavor
having sum(total_order) >= 3000 
order by sum(total_order) desc 