import sys
input = sys.stdin.readline 
dir = [[1,0],[-1,0],[0,-1],[0,1],[-1,-1],[1,-1],[-1,1],[1,1]]
sys.setrecursionlimit(5000000)

def dfs(x,y):

    if x <0 or x>=R or y <0 or y >=C:
        return 
    if mat[x][y] !=1:
        return 

    mat[x][y] ='#'

    for a,b in dir:
        dfs(x+a,y+b)


while True:
    w, h = map(int,input().split())
    if not w and not h:
        break 
    mat = [ list(map(int,input().split())) for _ in range(h) ]

    R = len(mat) ; C = len(mat[0])
    cnt =0 
    for r in range(R):
        for c in range(C):
            if mat[r][c] ==1:
                dfs(r,c)
                cnt +=1
            
    print(cnt)
