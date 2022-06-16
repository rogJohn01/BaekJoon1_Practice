N = int(input())
info  = [ list( map(int,input().split())) for _ in range(N) ]

info.sort( key = lambda x:x[0] )
nums = [ b for a,b in info ]
infoN = len(info)

nl = len(nums)
dp = [0]*nl
for i in range(nl):
    for j in range(i):
        if nums[j] < nums[i]:
            dp[i] = max( dp[j] +1 , dp[i] )

#print(max(dp))
print( infoN - max(dp) -1 )