import sys
input= sys.stdin.readline

N,M=map(int,input().split())

Mem=[0]+list(map(int,input().split()))
C=[0]+list(map(int,input().split()))
ans=sys.maxsize

DP=[[0 for _ in range(sum(C)+1)] for _ in range(N+1)]

for i in range(1,N+1):
    byte=Mem[i]
    cost=C[i]
    for j in range(1,sum(C)+1):
        #현재 앱을 비활성화 시킬만큼, cost가 충분하지 않은 경우
        if j<cost:
            DP[i][j]=DP[i-1][j]
        else:
            #현재 코스트가 충분한 경우는 , 2가지 경우가 있을수 있다.
            DP[i][j]= max(DP[i-1][j],DP[i-1][j-cost]+byte)
        if DP[i][j]>=M:
            ans=min(ans,j)

print(ans)