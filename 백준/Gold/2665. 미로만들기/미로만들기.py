import heapq as hq 
import sys 
input = sys.stdin.readline
N = int(input()) 
R = C = N 
mat = [ list( map(int , ' '.join(input()).split() )) for _ in range(R) ] 
for r in range(R):
    for c in range(C):
        mat[r][c] ^=1 



inf = float('inf') 

def dijkstra(): 

    dp = [ [inf]*(N) for _ in range(N) ] 
    hp = [] 
    hq.heappush(hp, [0,0,0] )
    dp[0][0] = 0 
    while hp: 
        v , x,y =  hq.heappop(hp)

        if dp[x][y] < v:
            continue 

        for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:
            nx, ny =  x+a , y+b 
            if 	0<= nx < R and 0 <= ny <C: 
                nv = v + mat[nx][ny]  
                if nv < dp[nx][ny]: 
                    dp[nx][ny] = nv 
                    hq.heappush(hp , [nv,nx,ny] ) 
    
    return dp[R-1][C-1] 

print(dijkstra())
        
