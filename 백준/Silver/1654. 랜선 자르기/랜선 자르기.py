
import sys 
input = sys.stdin.readline 


n , k =  map(int,input().split())
nums =   [ int(input()) for _ in range(n) ] 

l = 1 ; h = max(nums)
while l <= h:

        m = (l+h) >>1
        nlan = 0 
       
        for n in nums:
            nlan += n//m 

        if nlan >= k:
            l = m+1 
        else:
            h = m-1
print(h)