
import sys 
input = sys.stdin.readline
from collections import deque 

N = int(input()) 
apN = int(input()) 
appleInfo =  [ list( map(int,input().split())) for _ in range(apN) ] 
dirN = int(input()) 
dirInfo  = [ list( input().split()) for _ in range(dirN) ] 


mat = [ [0]*N for _ in range(N) ] 
for x, y in appleInfo:
    mat[x-1][y-1] = 1 

dir = {0:[0,-1] , 1:[-1,0] , 2:[0,1] , 3:[1,0] }





def simul():
    q = deque()  
    q.append([0,0] ) 
    x  = y = 0 
    t = 0  
    i = 0 
    d = 2   
    a, b = dir[d] 
    nx , ny = x+a , y+b  
    while True:

        if  nx <0 or nx>=N or ny <0 or ny >= N  or [nx,ny] in q:

            return t +1 
        
        if mat[nx][ny] ==1:
            q.append([nx,ny]) 
            mat[nx][ny] = 0 
        else: 
            q.append([nx,ny]) 
            q.popleft() 
        
        t +=1 
        if i<len(dirInfo) and t== int(dirInfo[i][0]): 
           
            if  dirInfo[i][1] =='D':
                d+=1 
            else: 
                d-=1 
            i +=1 

        a ,b = dir[d%4] 
        nx += a ; ny +=b 

print(simul()) 



