import sys 
input = sys.stdin.readline

R,C, RT = map(int, input().split())
mat = [ list( map(int,input().split())) for _ in range(R) ]


dir4 = { 0:[-1,0] , 1:[0,1] , 2:[1,0] , 3:[0,-1] }
def rotate():
    sx = sy = 0 
    d =2 ; x =sx ; y =sy 
    visit = [[0]*C for _ in range(R) ] 
    while True: 
 
        x =sx ; y =sy ; d =2 
        if visit[sx][sy]: break 
        
        prev = mat[x][y] 
        while True: 
            
            a,b = dir4[d] 
            nx = x+a ; ny =y+b 
            if visit[nx][ny]: break 

            while 	0<= nx < R and 0 <= ny <C and not visit[nx][ny]: 
                mat[nx][ny] , prev = prev , mat[nx][ny]  
                
                visit[nx][ny] = 1 
                x = nx ; y =ny 
                nx  +=a ; ny+= b 
                
            d =(d-1)% 4

        sx +=1 ; sy +=1 

while RT:
    RT -=1 
    rotate()
for r in range(R):
    for c in range(C):
        print(mat[r][c] , end=" ")
    print() 