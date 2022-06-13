
import sys 
input = sys.stdin.readline
#sys.setrecursionlimit(10**7)    


def dyn(a,b,c):

    if a<=0 or b<=0 or c<=0:
        #dp[a][b][c] = 1 
        return 1
    if a>20 or b>20 or c>20:
        return dyn(20,20,20)
    
    if dp[a][b][c]:
       return dp[a][b][c] 

    if a< b < c:
        dp[a][b][c] =  dyn(a,b,c-1)+ dyn(a,b-1,c-1)- dyn(a,b-1,c)
        return dp[a][b][c] 
    else:
        dp[a][b][c] =  dyn(a-1,b,c) + dyn(a-1,b-1,c) +dyn(a-1,b,c-1) -dyn(a-1,b-1,c-1) 
        return dp[a][b][c] 

dp = [ [ [0]*21  for _ in range(21) ] for _ in range(21) ] 

    
while True:
        
    a,b,c = map(int, input().split())
    if [a,b,c] == [-1,-1,-1]:
        break 
    v = dyn(a,b,c)
    print(f'w({a}, {b}, {c}) = {v}')
