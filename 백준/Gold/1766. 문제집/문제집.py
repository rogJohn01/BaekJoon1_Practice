import heapq as hq 
from collections import deque 
import sys 
input = sys.stdin.readline

v,e = map(int, input().split())

indegree = [0]*(v+1) 

graph = [[] for i in range(v+1) ] 

for _ in range(e): 
    a,b =  map(int, input().split())
    graph[a].append(b) 
    indegree[b] +=1 



def topology_sort(): 
    res = [] 
    heap = [] 

    for i in range(1, v+1): 
        if indegree[i] ==0: 
            hq.heappush(heap ,i)
    
    while heap: 
        now = hq.heappop(heap)
        res.append(now)

        for i in graph[now]:
            indegree[i] -=1 
            if indegree[i] ==0: 
                hq.heappush(heap, i)

    for i in res: 
        print(i , end= ' ') 

topology_sort() 
    