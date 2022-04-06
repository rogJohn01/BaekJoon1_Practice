from collections import Counter 
import sys 
input = sys.stdin.readline 

n = int(input())
nums =  list( map(int,input().split())) 
ans = [ -1 for _ in range(n)]

st = [] 
dic = Counter(nums)
for i in range(n):

	while st and  dic[nums[st[-1]]] < dic[nums[i]]:
		ans[st.pop()] = nums[i]
	st.append(i)

print(*ans)
