import heapq as hq 



N = int(input()) 
if N==1:
    print(0)
    exit() 
nums =  list(  int(input())  for _ in range(N) )
Daesom = nums[0] 
bribe = 0 
heap = [] 
for n in nums[1:]:
    hq.heappush( heap,  (-n,n))

while True: 

    km , k = hq.heappop(heap) 
    if Daesom  > k:
        print(bribe)
        break 
    else: # Daesom <=k 
        Daesom +=1 
        bribe +=1 
        hq.heappush(heap , (-(k-1) ,k-1 ))

