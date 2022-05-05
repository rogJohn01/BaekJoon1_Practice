N = int(input()) 
nums =  [ int(input()) for _ in range(N) ] 

if N==1:
    print(nums[-1] )
elif N ==2: 
    print( sum(nums))
elif N==3: 
    dp = [0]*(N+1) 
    dp[0] = nums[0]  
    dp[1] = dp[0] + nums[1] 
    dp[2] = max( nums[2] + nums[1] , dp[1] , nums[2] + dp[0] ) 
    print(max(dp))

else:
    dp = [0]*(N+1) 
    dp[0] = nums[0]  
    dp[1] = dp[0] + nums[1] 
    dp[2] = max( nums[2] + nums[1] , dp[1] , nums[2] + dp[0] ) 


    for i in range(3, len(nums)): 
        dp[i] = max( nums[i] +nums[i-1] + dp[i-3] , nums[i] + dp[i-2] , dp[i-1] ) 

    # print(dp) 
    print(max(dp)) 