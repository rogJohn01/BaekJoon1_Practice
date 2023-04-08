
N , k = map(int ,input().split())
nums = list(map(int, input().split()))




nums.sort()
ret = [] 
def dfs():


    if len(ret) ==k:
        print(*ret)
        return 

    for n in nums: 
        
        if not ret or (ret and ret[-1] <= n ):
            ret.append(n)
            dfs()
            ret.pop()
        
dfs()