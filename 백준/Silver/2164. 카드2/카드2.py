from collections import deque

n = int(input())

arr = [e for e in range(1,n+1)]

queue = deque(arr)

while len(queue)>1:
    queue.popleft()
    k = queue.popleft()
    queue.append(k)

print(queue[-1])