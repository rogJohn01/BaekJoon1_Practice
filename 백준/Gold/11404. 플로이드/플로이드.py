
import sys 
input = sys.stdin.readline

N = int(input())
M = int(input())

graph = [  [float('inf')]*(N)  for _ in range(N) ] 

for _  in range(M):
    x ,y , cost = map(int ,input().split() )
    x -=1 ; y -=1 
    graph[x][y] = min( graph[x][y] , cost)


for k in range(N):
    graph[k][k] = 0 
    for r in range(N):
        for c in range(N):
                graph[r][c] = min( graph[r][c] , graph[r][k] + graph[k][c]) 



for r in range(N):
    for c in range(N):
        if graph[r][c] ==float('inf'):
            graph[r][c] =0 
        print( graph[r][c] , end= ' ')
    print() 


