import sys 
input = sys.stdin.readline 
from collections import deque


N , M  =   map(int,input().split())
hx , hy =  map(int,input().split())
ex , ey =  map(int,input().split())
mat = [  list( map(int,input().split()))  for _ in range(N) ] 

dx = [-1,1,0,0] 
dy = [0 ,0 , -1,1 ] 

hx -=1 ; hy -=1 ; ex -=1 ; ey -=1 ; 

def bfs(hx,hy):
    q = deque() 
    q.append([hx,hy, 1 ] ) 
    visit = [[[0]*2 for _ in range(M)]  for _ in range(N) ] 
    visit[hx][hy][1] =0  

    while q:
        
        x, y , w  = q.popleft()
        if x==ex and y ==ey:
            return visit[x][y][w]
        for i in range(4):
            nx = x+dx[i] 
            ny = y+dy[i] 

            if 0<= nx < N and 0<= ny < M:
                if mat[nx][ny] ==1 and w==1: 
                    visit[nx][ny][0] = visit[x][y][w] +1
                    q.append([nx,ny , 0 ] ) 

                elif mat[nx][ny] ==0 and visit[nx][ny][w] ==0:
                    visit[nx][ny][w] = visit[x][y][w] +1
                    q.append([nx,ny,w] )
    return -1 

print(bfs(hx,hy)) 
                        