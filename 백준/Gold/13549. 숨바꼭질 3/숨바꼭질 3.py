
from collections import deque 
import sys 
input = sys.stdin.readline


N ,K = map(int, input().split())


Max = 10**5 +1 
q =deque() 
q.append( N  ) 
visit = [0]*(Max ) 
while q:
    x  = q.popleft() 
   

    if x==K:
        print(visit[x] )  
        break 
    

    for y in [x-1 ,x+1 , 2*x ]: 
        if 0<= y < Max and not visit[y]:  
            if x*2 ==y and x !=0: 
                visit[y]  = visit[x] 
                q.appendleft(y)
            else: 
                visit[y] = visit[x] +1 
                q.append( y )  