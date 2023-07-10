import sys
import heapq
v, e, p=map(int, input().split())
graph=[[] for _ in range(v+1)]
for _ in range(e):
    a, b, c=map(int, input().split())
    graph[a].append((b, c))
    graph[b].append((a, c))
INF=sys.maxsize
def dijkstra(start, end):
    dist=[INF for _ in range(v+1)]
    dist[start]=0
    q=[]
    heapq.heappush(q, (0, start))
    while q:
        distance, cur=heapq.heappop(q)
        if distance>dist[cur]:
            continue
        for nxt, dst in graph[cur]:
            nxt_distance=distance+dst
            if nxt_distance<dist[nxt]:
                dist[nxt]=nxt_distance
                heapq.heappush(q, (nxt_distance, nxt))
    return dist[end]
if dijkstra(1, v)==dijkstra(1, p)+dijkstra(p, v):
    print('SAVE HIM')
else:
    print('GOOD BYE')