import sys 
input = sys.stdin.readline 

R , C = map(int ,input().split() ) 
mat = [ list( map(int , ' '.join(input()).split() )) for _ in range(R) ] 

dp = [[0]* (C+1) for _ in range(R+1) ]
maxside = 0 

for  r in range(R):
    for c in range(C):
        if mat[r][c] ==1:
            dp[r+1][c+1] = min( dp[r][c] , dp[r+1][c] , dp[r][c+1] ) +1 
            maxside = max(maxside , dp[r+1][c+1] ) 

print( maxside*maxside )
