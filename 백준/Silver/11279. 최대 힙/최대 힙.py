
import heapq as hq 
import sys 

input = sys.stdin.readline
N = int(input())

arr = []
for _ in range(N):

	n = int(input())
	if n ==0:
		if not arr:
			print(0)
		else:
			k= hq.heappop(arr)[1] 
			print(k)
	else:
		hq.heappush(arr, (-n,n))


