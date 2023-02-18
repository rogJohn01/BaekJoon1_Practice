from collections import deque 


C ,R = map(int, input().split())
mat = [ list( map(int,input().split())) for _ in range(R) ] 

Done = False 
q = deque() 
for r in range(R):
    for c in range(C):
        if mat[r][c] == 1: 
            q.append([r,c] ) 
        elif mat[r][c] ==0:
            Done = True 


def bfs():

    while q: 
        x,y = q.popleft() 

        for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:  
            nx, ny =  x+a , y+b 
            if 	0<= nx < R and 0 <= ny <C: 
                if mat[nx][ny] ==0: 
                    q.append([nx,ny]) 
                    mat[nx][ny] = mat[x][y] +1 
        
  
if not Done: 
    print(0)
else: 
    bfs() 
    maxv = 0 
    left = False 
    for r in range(R):
        if left: 
            break 
        for c in range(C):
            if mat[r][c] == 0:
                left = True
            if mat[r][c] > maxv: 
                maxv = mat[r][c] 
    
    if left:
        print(-1)
    else: 
       print(maxv-1)  