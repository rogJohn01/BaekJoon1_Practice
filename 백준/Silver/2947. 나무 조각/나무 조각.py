nums =  list( map(int,input().split())) 

model = [1,2,3,4,5] 


while nums  != model:

    for i in range(1, 5): 

        if nums[i-1] > nums[i]:

            nums[i-1] , nums[i] = nums[i] , nums[i-1] 
            print(*nums) 