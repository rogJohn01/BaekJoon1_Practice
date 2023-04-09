
n , k = map(int , input().split())
nums = list(map(int , input().split()))

from collections import Counter 

nums.sort() 

def dfs(ret , counter):
    
    
    if len(ret) == k:
        print(*list(ret))
        return 
    
    for cn in counter:
      if counter[cn] >0: 
        ret.append(cn)
        counter[cn] -=1 
        dfs(ret , counter)
        ret.pop()
        counter[cn] +=1
        
dfs([], Counter(nums))
        
