

n = int(input())
m = int(input())
graph = [[0]*(n+1) for _ in range(n+1) ] 
for _ in range(m):
    a , b = map(int , input().split())
    graph[a][b] =1 
    graph[b][a] =1 

    
    

cnt = 0 
def dfs(v, disc ):
    global cnt 
    disc.append(v)
    cnt +=1 
    #print(v , end=' ' )
    for w in range(len(graph[v])):
        if graph[v][w] ==1 and (w not in disc):
            dfs(w , disc )

dfs(1,[] )
print( cnt-1 )
