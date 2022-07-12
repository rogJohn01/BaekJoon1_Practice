from itertools import permutations

import sys 
sys.setrecursionlimit(10**7)    



nums = [9,3,1] 
casework= [] 
for i in permutations(nums,3): 
    casework.append(list(i))



N = int(input()) 
scvs =  list( map(int,input().split())) 
size = max(scvs) +1 
dp = [ [ [0]*size  for _ in range(size) ]  for _ in range(size) ] 
inf = float('inf') 
ans = inf 
if len(scvs) <3:
    scvs += [0]*(3-len(scvs)) 
def dfs(s1,s2,s3, cnt):
    global ans 
  
    if s1 <=0 and s2<= 0 and s3<= 0:  
        ans = min(ans , cnt) 
        return 
    s1 = s1 if s1 >0 else 0 
    s2 = s2 if s2 >0 else 0 
    s3 = s3 if s3 >0 else 0 
   
    if( ans  < cnt): return 
    if  dp[s1][s2][s3] and   dp[s1][s2][s3] <= cnt: return 

    dp[s1][s2][s3] = cnt  

    for a,b,c in casework: 
        dfs(s1-a,s2-b ,s3-c ,cnt+1) 
  
dfs(scvs[0],scvs[1],scvs[2] ,0) 
print(ans) 

   

