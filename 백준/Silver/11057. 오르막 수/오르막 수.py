mod = 10007 

N = int(input()) 

dp = [ [0]*10 for _ in range(N+1) ] 

for i in range(10):
    dp[1][i] = 1 

for a in range(2, N+1):
    sumv = sum(dp[a-1] ) % mod  
    for b in range(10):

        if b==0: 
            dp[a][0] = sumv 
        else: 
            sumv -= dp[a-1][b-1] 
            dp[a][b] = sumv % mod  

print( sum( dp[N]) % mod) 
