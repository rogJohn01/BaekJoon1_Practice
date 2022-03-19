import sys 
import heapq 

input = sys.stdin.readline

N , K = map(int , input().split() ) 
# N = num of diamond / K = num of bags

diaList = [] 
for _ in range(N):
    diaList.append(list(map(int , input().split() ) ))

bagWeight = [] 
for _ in range(K):
    bagWeight.append(int(input()))


diaList.sort()
bagWeight.sort()

res = 0
temp = [] 

for bw in bagWeight:

    while diaList and bw >= diaList[0][0]:
        heapq.heappush(temp , -diaList[0][1])
        heapq.heappop(diaList)

    if temp:
        res += heapq.heappop(temp)
    elif not diaList:
        break 

print(-res)