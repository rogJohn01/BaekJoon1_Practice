N , K = map(int,input().split())
nums = list( map(int,input().split() ) )

cnt = 0 
box = [] 
for i, n in enumerate(nums):

    if n in box: 
        continue 

    if n not in box and len(box) < N:
        box.append(n) 

    if n not in box and len(box) == N: 
        
        idxbox = []  
        allin = True 
        for b in box:

            if b not in nums[i:]:
                box.remove(b)
                box.append(n) 
                allin = False 
                break
            
            else: 
                idx = nums[i:].index(b) 
                idxbox.append( [ b , idx ] )

        if allin: 
            idxbox.sort( key =lambda x: -x[1] )
            box.remove( idxbox[0][0] ) 
            box.append(n) 

        cnt +=1 

print(cnt) 