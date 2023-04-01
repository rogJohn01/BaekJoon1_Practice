
a , b = map(int , input().split())

ret = []


def dfs():
    if len(ret) ==b:
        print(*ret)
        return 
    
    for i in range(1, a+1):
        ret.append(i)
        dfs()
        ret.pop()
    

dfs()