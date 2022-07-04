import sys 
input = sys.stdin.readline

sys.setrecursionlimit(10**7)    

N , e,w,s,n = map(int, input().split())

dprob = [n,e,s,w] 
dprob = list(map(lambda x: x/100 ,dprob ))



R = C = 2*N +1
visit= [ [0]*C for _ in range(R) ]
ans = 0 

dir4 = { 0:[-1,0] , 1:[0,1] , 2:[1,0] , 3:[0,-1] }
dir4R = { (v[0],v[1]):k for k,v in dir4.items() } 

def backtrack(x,y , move,odds):
    global ans 

    if move ==N: 
        ans += odds 
        return 
    
    for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:
        nx, ny =  x+a , y+b 
        if 	0<= nx < R and 0 <= ny <C and not visit[nx][ny]:  
            visit[nx][ny] = 1 
            backtrack(nx,ny,move+1, odds*dprob[dir4R[(a,b)]]  )
            visit[nx][ny] = 0 

visit[N][N]=1 
backtrack( N,N,0, 1) 
print(ans) 


