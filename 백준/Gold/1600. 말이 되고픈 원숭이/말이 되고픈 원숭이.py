import sys 
input = sys.stdin.readline


k = int(input()) 
C , R = map(int, input().split())
mat = [ list( map(int,input().split())) for _ in range(R) ] 

from collections import deque 
visit = [ [ [0]*(k+1) for _ in range(C) ] for _ in range(R) ] 

#visit[0][0] = [1] * (k + 1)
def visitable(nx,ny, w): 
     return  0<=nx < R and 0<=ny < C and mat[nx][ny] ==0 and not visit[nx][ny][w] 

def bfs():

    q = deque()
    q.append([0,0,0] ) 
    dx = [1,2,2,1,-1,-2 ,-2,-1]
    dy = [2,1,-1,-2 ,-2,-1,1,2]
    
    while q: 
        x, y , h = q.popleft()
        
        if [x,y] == [R-1,C-1]:
            return visit[x][y][h] 

        for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:  
            nx, ny =  x+a , y+b 
            if visitable(nx,ny,h): 
                visit[nx][ny][h] = visit[x][y][h] +1 
                q.append([nx,ny,h ] ) 

        if h <k:     
            for i in range(8):
                nx = x+dx[i]
                ny = y+dy[i] 

                if visitable(nx,ny,h+1): 
                        visit[nx][ny][h+1] = visit[x][y][h] +1
                        q.append( [nx,ny ,h+1 ] ) 
    return -1 

print(bfs()) 