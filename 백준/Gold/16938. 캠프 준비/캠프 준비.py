

N ,L ,R , X = map(int, input().split())
nums =  list( map(int,input().split())) 

ans = 0 
def backtrack(start,score,cnt): 
    global ans 
    
    if cnt >len(nums):
        return 

    if cnt >=2: 
        if L <= sum(score) <= R: 
            if max(score)-min(score) >=X: 
                ans +=1 

    for i in range(start, N): 
        
        score.append(nums[i]) 
        backtrack(i+1, score,cnt+1) 
        score.pop() 

backtrack(0,[] ,0)
print(ans) 