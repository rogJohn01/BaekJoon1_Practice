N = int(input()) 
nums =  list( map(int,input().split())) 


dp = nums[:] 
for i in range(1,N):
    for j in range(i):
        if nums[j] < nums[i]:
            dp[i] = max(dp[i] , nums[i]+ dp[j] ) 

print(max(dp))