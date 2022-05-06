import sys 
input = sys.stdin.readline


N = int(input()) 
mat = [ list( map(int,input().split())) for _ in range(N) ] 
#print(mat) 
R = N ; C =3 
dp = [ [0]*C  for _ in range(N) ] 
dp[0] = mat[0] 

for r in range(1,R):
    for c in range(C):
        
        if c==0:
            dp[r][c] = mat[r][c] + min( dp[r-1][1] , dp[r-1][2] ) 
        elif c==1: 
            dp[r][c] = mat[r][c] + min( dp[r-1][0] , dp[r-1][2] ) 
        else: # c==2:
            dp[r][c] = mat[r][c] + min( dp[r-1][0] , dp[r-1][1] ) 

#print(dp) 
print( min( dp[R-1] )) 

