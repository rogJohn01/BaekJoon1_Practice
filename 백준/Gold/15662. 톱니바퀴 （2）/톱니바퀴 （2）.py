from collections import deque 


WN = int(input()) 
wheels = [[0] ]  
for _ in range(WN):
    wheels.append( deque( [e for e in input() ])) 


N = int(input()) 
order = [] 
while N: 
    N -=1 
    a,b =map(int, input().split())
    order.append( [a,b])



for j in range(len(order)):
    wh , d = order[j] 
    change = [[wh,d]]  
    if wh >1: #left 
        dd = d 
        for i in range(wh,1,-1):

            if wheels[i][6] != wheels[i-1][2]:
                dd = -dd 
                change.append( [i-1 , dd ] ) 
            else:
                break 
    if wh < WN: #right 
        dd =d 
        for i in range(wh,WN): 
            
            if wheels[i][2] != wheels[i+1][6]: 
                dd = -dd 
                change.append( [ i+1, dd] ) 
            else:
                break 
    if change: 
        for ww , dd in change: 
            wheels[ww].rotate(dd)

ans = 0 
for wheel in wheels[1:]:
    ans += int( wheel[0] ) 
print(ans) 
