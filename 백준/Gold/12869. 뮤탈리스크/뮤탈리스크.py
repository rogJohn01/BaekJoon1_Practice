import itertools
import sys
n=int(input())
scv=list(map(int, input().split()))
if n<3:
    scv+=[0]*(3-n)
attacks=[9, 3, 1]
dp=[[[-1 for _ in range(61)] for _ in range(61)] for _ in range(61)]
def hp_update(a, b, c):
    if a<0:
        return hp_update(0, b, c)
    if b<0:
        return hp_update(a, 0, c)
    if c<0:
        return hp_update(a, b, 0)
    if not a and not b and not c:
        return 0
    if dp[a][b][c]!=-1:
        return dp[a][b][c]
    dp[a][b][c]=sys.maxsize
    for damage in list(itertools.permutations(attacks)):
        dp[a][b][c]=min(dp[a][b][c], hp_update(a-damage[0], b-damage[1], c-damage[2]))
    dp[a][b][c]+=1
    return dp[a][b][c]
print(hp_update(scv[0], scv[1], scv[2]))