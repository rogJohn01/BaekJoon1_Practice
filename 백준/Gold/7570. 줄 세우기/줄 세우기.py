import sys
input = sys.stdin.readline

N = int(input())
children = list(map(int,input().split()))

idxs = [0]*(N+1)
for i in range(N):
    idxs[children[i]]=i

cnt = 1
longest = 0
for n in range(1,N):
    if idxs[n]<idxs[n+1]:
        cnt += 1
        if cnt>longest:
            longest = cnt
    else:
        cnt = 1
        
print(N-longest)