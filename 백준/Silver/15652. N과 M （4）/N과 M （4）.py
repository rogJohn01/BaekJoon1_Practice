
n , k = map(int, input().split())

ret = [] 
def dfs(start):
    
    if len(ret) == k:
        print(*ret)
        return 
    
    for i in range(start, n+1):
        ret.append(i)
        dfs(i)
        ret.pop()

dfs(1)
