import heapq as hq 
import sys 
input = sys.stdin.readline

N = int(input()) 
M = int(input()) 
graph = [ [] for _ in range(N+1) ] 
for _ in range(M):
    a, b, cost = map(int, input().split())
    graph[a].append([b,cost] ) 

start ,end = map(int, input().split())


inf = float('inf') 
dp = [inf]*(N+1) 
dp[start] = 0 
hp = [] 
hq.heappush( hp , [0,start ] ) 
while hp: 

    w , node = hq.heappop( hp) 
    if dp[node] < w: 
        continue 

    for  nnode , nw  in graph[node]: 
        tw = w + nw 
        if tw < dp[nnode]: 
            dp[nnode] = tw 
            hq.heappush(hp , [ tw , nnode ] ) 


print( dp[end]) 