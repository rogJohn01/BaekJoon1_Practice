
import sys 
input = sys.stdin.readline

N = int(input())

mat= [ list( map(int,input().split())) for _ in range(N) ]


for k in range(N):
    for r in range(N):
        for c in range(N):
            if mat[r][c] or ( mat[r][k] and mat[k][c]):
                mat[r][c] =1 




for r in range(N):
    for c in range(N):
        print( mat[r][c] ,end=' ')
    print()