import sys 
input = sys.stdin.readline


import heapq as hq
n = int(input())
lectures = [ list(map(int,input().split()))  for _ in range(n)] 
lectures.sort( key =lambda x: x[1])
hqlist = [] 
for lect in lectures:
    hq.heappush(hqlist, lect[0])
    if (len(hqlist) > lect[1]):
        hq.heappop(hqlist)
        
print(sum(hqlist))
