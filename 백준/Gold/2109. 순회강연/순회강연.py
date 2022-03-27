
n = int(input())
lectures = [ list(map(int, input().split() )) for _ in range(n)]

lectures.sort( key = lambda x: -x[0])
days = [0]*10001

cnt = 0 
for lect in lectures:
    for i in range(lect[1],0,-1):

        if days[i] ==0:
            days[i] =1
            cnt += lect[0]
            break

print(cnt)