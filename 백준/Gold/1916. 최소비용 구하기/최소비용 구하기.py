import heapq as hq 

import sys 
input = sys.stdin.readline


N = int(input())
M =  int(input())

inf = float('inf') 

graph = [ []  for _ in range(N+1) ] 

for _ in range(M):
    a, b, cost = map(int , input().split()) 
    graph[a].append( [ b , cost ] )  

sv , ev =  map(int , input().split()) 

q = [] 
ans = [inf] *(N+1)  

def dijkstra(start):

    ans[start] = 0 
    hq.heappush(q , [ 0 , start ] ) 

    while q: 
        cw , cnode =  hq.heappop(q)

        if ans[cnode]  < cw: 
            continue 

        for nnode , w in graph[cnode]: 

            nw  = cw +w 
            if nw < ans[nnode]:
                ans[nnode] =nw 
                hq.heappush(q , [nw ,nnode] ) 

dijkstra(sv) 
print(ans[ev]) 


