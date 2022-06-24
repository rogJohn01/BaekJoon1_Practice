from collections import deque 
import sys 
input = sys.stdin.readline


N ,K = map(int, input().split())
mat = [ list( map(int,input().split())) for _ in range(N) ] 
S , tx,ty = map(int, input().split())

R = C = N 

tmp= [] 
for r in range(R):
    for c in range(C):
        if mat[r][c] >0: 
            tmp.append([mat[r][c],r,c] )

tmp.sort( key = lambda x: x[0] ) 
q = deque(tmp)
    
while S: 
    for _ in range(len(q)): 
        vrid , x ,y = q.popleft() 
        for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:
            nx, ny =  x+a , y+b 
            if 	0<= nx < R and 0 <= ny <C: 
                if mat[nx][ny] ==0: 
                    mat[nx][ny] =mat[x][y] 
                    q.append([mat[nx][ny],nx,ny])

    S -=1 


print(mat[tx-1][ty-1] ) 
            
            
            
        
        
        
        
        
         