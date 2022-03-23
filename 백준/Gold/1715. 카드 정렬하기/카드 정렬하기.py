import heapq as hq 
import sys 
input = sys.stdin.readline

N = int(input())

cl = list(int(input()) for _ in range(N))
hq.heapify(cl)
res = 0 

while len(cl) !=1:

	n1 = hq.heappop(cl)
	n2 = hq.heappop(cl)
	sumv = n1+n2
	res += sumv
	hq.heappush(cl,sumv)

print(res)