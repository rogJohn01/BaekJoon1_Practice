
import sys 
input = sys.stdin.readline

sys.setrecursionlimit(10**7)    
N = int(input())

info =  [ list( map(int,input().split())) for _ in range(N) ] 
graph = [ [] for _ in range(N+1) ] 
for chunk in info:
    v = chunk[0] 
    for i in range(1, len(chunk)-2,2 ):
       graph[v].append( [ chunk[i] , chunk[i+1] ] )



def dfs(v,cul):
    visit[v] = True 
    for b , dis in graph[v]:
        if not visit[b]:
            dist[b] = cul+dis 
            dfs(b , cul+dis) 


visit = [False]* (N+1)
dist = [0]*(N+1)
dfs(1, 0)

#print(dist) 
#print(dist.index(max(dist)))

t =dist.index(max(dist))

visit = [False]* (N+1)
dist = [0]*(N+1)
dfs(t, 0)

#print(dist) 
print(max(dist)) 