

N = int(input()) 
tri = [ list( map(int,input().split())) for _ in range(N) ]


dp = [ [0]*a for a in range(1,N+1) ]

dp[0] = tri[0] 
R = len(tri) 
for r in range(1,R):
    for c in range(r+1):
        
        if c==0:
            dp[r][0] = dp[r-1][0] + tri[r][0]
        
        elif c == r:
            dp[r][-1] = dp[r-1][-1] + tri[r][-1] 
        else:
            dp[r][c] = max(dp[r-1][c-1] , dp[r-1][c] ) + tri[r][c] 

#print( dp[-1] ) 
print( max(dp[-1])) 

