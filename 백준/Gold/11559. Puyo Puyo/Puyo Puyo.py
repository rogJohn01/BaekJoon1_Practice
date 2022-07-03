from collections import deque 


R = 12 ; C = 6 
mat = [  list(' '.join(input().split()))   for _ in range(R) ] 



def bfs(x,y):
    syb = mat[x][y]
    box.append([x,y])
    visit.add((x,y))
    q =deque()
    q.append([x,y])
    while q:
        x,y = q.popleft() 

        for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:   
            nx, ny =  x+a , y+b 
            if 	0<= nx < R and 0 <= ny <C: 
                if mat[nx][ny] == syb:
                    if (nx,ny) not in visit: 
                        q.append([nx,ny])
                        box.append([nx,ny])
                        visit.add((nx,ny))
        
        



puyo = [] 
for r in range(R):
    for c in range(C):
        if mat[r][c] != '.': 
            puyo.append([r,c])

cnt = 0 
while True:
    
    tbox = [] 
    visit = set() 
    for r,c in puyo: 
        if (r,c) not in visit and mat[r][c] !='.': 
            box = [] 
            bfs(r,c)
            if len(box) >=4: 
                tbox.extend(box)
                for a,b in box:
                    mat[a][b] = '.'

    if not tbox:
        break 

    #gravity 
    if tbox:
        
        cnt +=1 
        tbox.sort( key = lambda x: x[0])
        for x, y in tbox: 
            nx = x -1 
            while 0<= nx < R and 0 <= y <C and mat[nx][y] != '.':
                    mat[x][y] , mat[nx][y] = mat[nx][y] , mat[x][y]
                    x = nx ; y = y ; nx -=1 

print(cnt)