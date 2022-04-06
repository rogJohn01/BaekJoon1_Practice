import sys
sys.setrecursionlimit(10**9)

input=sys.stdin.readline

n=int(input())

graph = [[] for _ in range(n+1)]
visited = [False for _ in range(n+1)]
answer = [1 for _ in range(n+1)]

def dfs(node):
    visited[node] = True 
    for i in graph[node]:
        if not visited[i]:
            answer[i] = node 
            dfs(i)
    return 

for i in range(n-1):
    a , b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)

dfs(1)

for i in range(2, len(answer)):
    print(answer[i])