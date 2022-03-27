import sys 
input = sys.stdin.readline


import heapq as hq
n = int(input())
problems = [ list(map(int,input().split()))  for _ in range(n)] 
problems.sort( key =lambda x: x[0])
hqlist = [] 
for prob in problems:
    hq.heappush(hqlist , prob[1])
    if len(hqlist) > prob[0]:
        hq.heappop(hqlist)

print(sum(hqlist ))