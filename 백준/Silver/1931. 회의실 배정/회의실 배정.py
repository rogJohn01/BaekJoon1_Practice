n = int(input())
tl = [] 
for _ in range(n):
    tl.append( list(map(int, input().split())) )

tl.sort(key =lambda x: (x[1] , x[0] ) )

end = tl[0][1] 
cnt = 1

for i in range( 1, n):
    
    if tl[i][0] >= end:
        cnt +=1 
        end = tl[i][1]

print(cnt)