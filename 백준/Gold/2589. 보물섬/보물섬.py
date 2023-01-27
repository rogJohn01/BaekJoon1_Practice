

import sys 
input = sys.stdin.readline 


R , C = map(int , input().split())
grid = [  list(' '.join(input()).split() )  for _ in range(R) ] 



import copy 
from collections import deque 


mat  = copy.deepcopy(grid)
dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]

maxv = 0
for r in range(R):
    for c in range(C):
        if grid[r][c] =='L':
            mat  = copy.deepcopy(grid)
            mat[r][c] = 0 
            q = deque()
            q.append([r,c] ) 
            
            while q:
                
                x, y = q.popleft() 
                for a, b in dirs:
                    nx = x + a 
                    ny = y + b 

                    if nx <0 or nx >= R or ny < 0 or ny >=C:
                        continue 


                    if mat[nx][ny] =='L':
                        mat[nx][ny] = 0 
                        mat[nx][ny] = mat[x][y] +1
                        q.append((nx,ny))
                        maxv = max(maxv , mat[nx][ny] ) 

print(maxv) 
