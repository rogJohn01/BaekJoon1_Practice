N = int(input())

mat= [ list( map(int,input().split())) for _ in range(N) ] 


all_visited = [1 for _ in range(N)]

def backtrack(v , sumv , start):
    global minv 

    if sumv > minv:
        return 
    if visit == all_visited and v ==start: 
        if sumv < minv:
            minv = sumv 
        return 

    for y in range(N):
        if mat[v][y] !=0 and not visit[y]:
            visit[y] = 1 
            backtrack( y,  sumv+ mat[v][y] , start  ) 
            visit[y] = 0 

inf = float('inf')
ans = inf 
for i in range(N):
    visit = [ 0 for _ in range(N) ]
    minv = inf 
    backtrack(i , 0 , i  )
    ans = min(ans , minv )

print(ans)

