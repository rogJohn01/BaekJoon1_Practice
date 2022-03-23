n = int(input())
nums = list(map(int, input().split() ))

nums.sort()
pre =0 
sumv= 0
for n in nums:
    pre +=n
    sumv += pre
print(sumv )