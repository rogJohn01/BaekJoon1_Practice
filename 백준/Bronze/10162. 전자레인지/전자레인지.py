
x = int(input()) 

times = [300, 60 ,10]
cnt =  [0]*3
i =0 
for t in times: 
    cnt[i] += x//t 
    x %= t
    i +=1 

if x==0:
    print(*cnt ) 
else:
    print( -1) 