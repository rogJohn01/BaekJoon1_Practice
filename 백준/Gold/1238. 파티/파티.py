import heapq as hq 
import sys 
input = sys.stdin.readline



N , M  , X = map(int, input().split())
graph= [ [] for _ in range(N+1)  ] 
for _ in range(M):
    a , b, t  = map(int, input().split())
    graph[a].append( [t ,b ] ) 


def dijkstra(start,end): 

    inf = float('inf') 
    hp = [] 
    hq.heappush(hp , [0,start ] ) 
    dp = [inf]*(N+1) 
    dp[start] = 0 
    while hp:

        t , node = hq.heappop(hp) 

        if dp[node] < t:
            continue 

        for nt , nnode in graph[node]:
            tt = nt + t 
            if tt < dp[nnode]:
                dp[nnode] =tt 
                hq.heappush(hp , [tt,nnode] ) 

    return dp[end] 

maxv= 0 
for i in range(1,N+1):
    tmp = dijkstra(i , X)
    tmp += dijkstra(X , i) 
    maxv = max(maxv , tmp)

print(maxv) 