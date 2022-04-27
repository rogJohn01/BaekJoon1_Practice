import copy 
from collections import deque 
import sys 
input = sys.stdin.readline

R,C  =   map(int,input().split())
mat= [ list( map(int,input().split())) for _ in range(R) ] 


def bfs():
    global ans 
    q = deque() 
    mat2 = copy.deepcopy(mat) 
    for r in range(R):
        for c in range(C):
            if mat2[r][c] ==2: 
                q.append([r,c] ) 

    while q:
         x , y = q.popleft() 
         for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:
            nx , ny = x+a, y+b
        
            if 0<=nx < R and 0<=ny < C:
                if mat2[nx][ny] ==0:
                    mat2[nx][ny] =2 
                    q.append([nx,ny]) 

    cnt = 0  
    for r in range(R):
        for c in range(C):
            if mat2[r][c] ==0:
                cnt +=1 
    
    ans = max(ans , cnt) 



def buildWall(x):

    if x ==3:
        bfs()
        return 
    for r in range(R):
        for c in range(C):
            if mat[r][c] ==0:
                mat[r][c] =1 
                buildWall(x+1)
                mat[r][c] = 0 

ans = 0 
buildWall(0) 
print(ans) 

