inf = float('inf') 
N , M ,  R  = map(int, input().split())

item =  list( map(int,input().split())) 
graph = [ [inf]*N for _ in range(N) ] 
for _ in range(R): 
    a,b, i = map(int, input().split())
    a -=1 ; b -=1 ; 
    graph[a][b] = i 
    graph[b][a] = i 


for k  in range(N):
    graph[k][k] = 0 
    for x in range(N):
        for y in range(N): 
            graph[x][y] = min( graph[x][y] , graph[x][k] + graph[k][y] ) 


maxv = 0 
for x in range(N):
    tmp = 0 
    for y in range(N):
        if graph[x][y] <=M:
            tmp  += item[y] 

    maxv = max(maxv , tmp) 

print(maxv) 