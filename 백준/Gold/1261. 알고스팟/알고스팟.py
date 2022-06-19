import heapq as hq 
import sys 
input = sys.stdin.readline

C , R = map(int, input().split())
mat =  [ list( map(int , ' '.join(input()).split() )) for _ in range(R) ] 


inf = float('inf') 
dp = [ [inf]*C for _ in range(R) ] 
dp[0][0] = 0 
hp = [] 
hq.heappush( hp , [mat[0][0], 0, 0 ] ) 
while hp: 

    v  , x, y = hq.heappop( hp) 
    if dp[x][y]  < v: 
        continue 

    for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:
        nx, ny =  x+a , y+b 
        if 	0<= nx < R and 0 <= ny <C: 
            tv = mat[nx][ny] + v 
            if tv < dp[nx][ny]: 
                dp[nx][ny] = tv 
                hq.heappush( hp , [ tv , nx,ny ] ) 
                #print('tv,nx,ny' ,[tv,nx,ny ] )     

print(dp[R-1][C-1] ) 