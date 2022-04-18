from collections import deque

import sys 
input = sys.stdin.readline 



C, R , H  =  map(int,input().split()) 

mat = [] 
temp = [] 
cnt = 0 
for _ in range(R*H):
    arr =  list( map(int,input().split())) 
    temp.append(arr)
    cnt +=1 
    if  cnt ==R:
        mat.append(temp)
        cnt = 0 
        temp = [] 

#print(mat)

q = deque() 

for h in range(H): 
    for r in range(R):
        for c in range(C): 
             if mat[h][r][c]  ==1:
                q.append([h,r,c] )  

def bfs():

    while q:

        z, x , y  = q.popleft()
        for c,  a, b  in [[1,0,0] ,[-1,0,0] , [0,1,0] , [0,-1,0 ] ,[0,0,1] ,[0,0,-1 ] ]:
            nz , nx , ny = z +c , x +a , y +b 
            if 0<= nx < R and 0<=ny < C and 0<= nz < H and  mat[nz][nx][ny] ==0:
                mat[nz][nx][ny] = mat[z][x][y] +1
                q.append([nz,nx,ny] ) 


bfs() 
res = 0
for h in range( H):
    for row in mat[h]:
        for e in row:
            if e ==0:
                print(-1)
                exit(0)
        res = max(res , max(row) ) 
print(res-1 ) 
