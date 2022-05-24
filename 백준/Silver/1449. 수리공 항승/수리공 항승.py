



N ,L = map(int, input().split())
nums =  list( map(int,input().split())) 
nums.sort() 

cnt = 1 
pre = nums[0]+ L  -0.5  
for n in nums[1:]:
    
    if pre < n:
        cnt +=1 
        pre = n+L-0.5 

print(cnt) 