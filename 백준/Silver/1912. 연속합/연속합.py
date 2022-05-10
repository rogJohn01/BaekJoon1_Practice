N = int(input()) 
nums =  list( map(int,input().split())) 

nl = len(nums)

dp = [0]*nl
dp[0] = nums[0] 
for i in range(1, nl):
    dp[i] = max( 0 , dp[i-1] ) + nums[i] 

print(max(dp)) 
