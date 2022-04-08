



import sys 
input = sys.stdin.readline 

n = int(input())
nums = list(map(int, input().split()))
nums.sort()

def threePointer(nums):
    
    minv = float('inf')
    for i in range(len(nums)):

        l = i+1 ; r = len(nums)-1
        while l <r:

            sumv = nums[i] + nums[l]+nums[r]
            
            if abs(sumv) < minv:
                minv = abs(sumv)
                ans = [ nums[i], nums[l], nums[r] ] 
                if sumv ==0:
                    return ans 

            elif sumv > 0:
                r -=1 
            elif sumv <0:
                l +=1  
    return ans

print(*threePointer(nums) )