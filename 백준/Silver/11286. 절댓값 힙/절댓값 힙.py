
import heapq as hq 
import sys 
input = sys.stdin.readline 

n = int(input())

heap = [] 
for _ in range(n):

    x = int(input())

    if x ==0: 
        if not heap:
            print(0)
        else:
            print(hq.heappop(heap)[1]) 


    else: 
        if x >0:
            hq.heappush(heap , (x,x) )
        else: 
            hq.heappush(heap , (-x,x))