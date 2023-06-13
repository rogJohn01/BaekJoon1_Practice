import sys
import heapq 
from collections import deque 

INF = sys.maxsize 


while True:
    n, m = map(int, sys.stdin.readline().rstrip().split())
    if n == 0 and m == 0: break
    nodes = [[] for _ in range(n)]
    nodes_inv = [[] for _ in range(n)]
    edges = [[False for _ in range(n)] for _ in range(n)]
    s, d = map(int, sys.stdin.readline().rstrip().split())

    for _ in range(m):
        u, v, p = map(int, sys.stdin.readline().rstrip().split())
        nodes[u].append([v, p])
        nodes_inv[v].append([u, p])

    def dijkstra():
        dist = [INF for _ in range(n)]
        dist[s] = 0 
        pq = [] 
        heapq.heappush(pq , [ 0 ,s ])
        while pq: 
            ccost , cnode = heapq.heappop(pq)
            if dist[cnode] < ccost: continue 
            for nnode , ncost in nodes[cnode]:
                nncost = ncost + ccost 
                if edges[cnode][nnode]: continue 
                if dist[nnode] > nncost:
                    dist[nnode] = nncost  
                    heapq.heappush(pq, [nncost , nnode])
        return dist 

    def bfs(): 
        q = deque() 
        q.append(d)
        while q: 
            cnode = q.popleft() 
            if cnode ==s: continue 
            for nnode , ncost in nodes_inv[cnode]: 
                if dist[nnode] + ncost == dist[cnode] and not edges[nnode][cnode]:
                    edges[nnode][cnode] = True 
                    q.append(nnode)

    dist = dijkstra() 
    bfs() 
    
    dist = dijkstra() 
    if dist[d] == INF: print(-1)
    else: 
        print(dist[d])

