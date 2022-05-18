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
    res = [0]*(v+1)  
    q =deque() 

    for i in range(1, v+1): 
        if indegree[i] ==0: 
            q.append( (i,1)) 
    while q: 
        now, s = q.popleft()
        res[now] = s

        for i in graph[now]:
            indegree[i] -=1 
            if indegree[i] ==0: 
                q.append((i,s+1)) 
    for i in res[1:]: 
        print(i , end= ' ') 

topology_sort() 
    