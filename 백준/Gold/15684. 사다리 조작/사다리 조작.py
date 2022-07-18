import sys 
input = sys.stdin.readline

N , M , H = map(int, input().split())
ladder = [ [0]*N for _ in range(H)] 
for _ in range(M):
    a,b = map(int, input().split())
    ladder[a-1][b-1] = 1 

inf = float('inf') 
ans = inf 

def run_game():
    for s in range(N): 
        m = s 
        for h in range(H): 
            if ladder[h][m]:
                m +=1 
            elif m > 0 and ladder[h][m-1]:
                m  -=1 
        if m != s: 
            return False 
    return True 

def dfs(cnt, x,y): 
    global ans 
    if run_game():
        ans = min(ans, cnt) 
        return 
    if cnt ==3: 
        return 

    for h in range(x , H): 

        m = y if h == x else 0 
        
        for c in range(m, N-1): 
            if ladder[h][c] ==0:
                ladder[h][c]=1 
                dfs(cnt +1 , h,c+2)
                ladder[h][c] =0 

        

dfs(0,0,0)
print(ans if ans !=inf else -1 ) 

