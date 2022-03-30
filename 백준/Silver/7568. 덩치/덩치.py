import sys 
input = sys.stdin.readline 
n = int(input())

size = [ list(map(int,input().split( ))) for _ in range(n) ]
res =[] 
for cs in size:
    rank =1 
    for ns in size:
        if (cs[0] <ns[0]) and (cs[1] < ns[1]):
            rank +=1 

    res.append(rank)
print(*res)
