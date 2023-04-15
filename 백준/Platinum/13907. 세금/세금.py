import heapq
import sys
input=sys.stdin.readline
n,m,k=map(int,input().split())
s,e=map(int,input().split())
g=[[] for _ in range(n+1)]
for _ in range(m):
    a,b,w=map(int,input().split())
    g[a].append((b,w))
    g[b].append((a,w))
INF=int(1e9)
dist=[[INF]*(n+1) for _ in range(n+1)]
def dijk(s,e,dist):
    q = []
    heapq.heappush(q,(0,s,0))
    dist[s] = [0]*(n+1)
    while q:
        d, now, cnt = heapq.heappop(q)
        f = 0
        for i in range(1,cnt):
            if dist[now][i] < d:
                f = 1
                break
        if dist[now][cnt] < d or now==e or f:
            continue
        for x,w in g[now]:
            cost = d + w
            if cost < dist[x][cnt+1]:
                dist[x][cnt+1] = cost
                heapq.heappush(q,(cost,x,cnt+1))
    return dist[e]

a = dijk(s,e,dist)
print(min(a))
for _ in range(k):
    p = int(input())
    a = [x+i*p for i,x in enumerate(a)]
    print(min(a))