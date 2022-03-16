





from collections import deque 
dx = [1,2,2,1,-1,-2 ,-2,-1]
dy = [2,1,-1,-2 ,-2,-1,1,2]


def bfs(x,y):


            q = deque()
            q.append((x,y))
            if [x,y] == end:
                print(0)
                return 

            while q:

                x, y  = q.popleft()

                for i in range(8):
                    nx = x+dx[i]
                    ny = y +dy[i]

                    if nx <0 or nx>=len(grid) or ny <0 or ny>=len(grid[0]):
                            continue 

                    if [nx,ny] == end:
                            grid[nx][ny] = grid[x][y] +1 
                            print(grid[nx][ny])
                            return 


                    if grid[nx][ny] ==0:
                            grid[nx][ny] = grid[x][y] +1 
                            q.append((nx,ny ))


t = int(input())
for _ in range(t):
    n = int(input())
    start = list(map(int, input().split()))
    end = list(map(int, input().split()))
    grid = [[0]*n for _ in range(n)]
    bfs(*start)