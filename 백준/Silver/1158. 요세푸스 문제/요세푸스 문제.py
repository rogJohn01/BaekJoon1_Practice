from collections import deque 


N , K = map(int,input().split() )


arr = [ i  for i in range(1, N+1) ]
ans=[] 
dead = [ 0 for _ in range(N+1) ]

i =-1 
while len(ans)!=N:

    k = K   
    while k:
        
        i = (i+1) % N 
        if not dead[i]:
            k -=1 
    
    dead[i] = 1 
    ans.append( arr[i]) 




s="<"
for i in range(len(ans)):
    a = ans[i]
    if i == len(ans)-1:
        s+=str(a)+">"
    else: 
        s+=(str(a)+", ")  

print(s)




