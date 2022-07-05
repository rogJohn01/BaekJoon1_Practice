H ,W = map(int, input().split())

h =  list( map(int,input().split())) 

hn = len(h)

lw = [0]*hn
rw = [0]*hn
for l in range(1,hn):
    lw[l] = max( lw[l-1] , h[l-1] )

for r in range(hn-2,-1,-1):
    rw[r] = max( rw[r+1] , h[r+1] )

rain = 0
for i in range(hn):
    wlev = min( lw[i] , rw[i] )
    if wlev > h[i]:
        rain += wlev -h[i]

print(rain) 