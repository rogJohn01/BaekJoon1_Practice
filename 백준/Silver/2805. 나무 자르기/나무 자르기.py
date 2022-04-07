

import sys 
input = sys.stdin.readline 

n , m =  map(int,input().split())
nums =  list( map(int,input().split())) 



l = 1 ; h = max(nums)
while l <= h:

    k = (l+h) >>1 
    take = 0
    for n in nums:
        if n >k:
            take += (n-k)


    if take  >= m:
        l = k+1 
    else:
        h = k-1

print(h)