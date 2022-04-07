import sys
input = sys.stdin.readline


n = int(input())
nums = [ int(input()) for  _ in range(n) ] 

st = []
cnt = 0 
for i in range(len(nums)):

	while st and  nums[st[-1] ] <=nums[i]:
		k = st.pop()
		cnt += (i-k)-1	
	st.append(i)

while st:
    cnt += (len(nums)-1) - st.pop()
    
print(cnt)
