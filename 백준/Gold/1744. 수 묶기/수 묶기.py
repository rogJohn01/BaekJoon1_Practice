neg = [] 
pos = [] 
zeros =[]
ones = [] 

N = int(input()) 
for _ in range(N):
    n = int(input()) 
    
    if n ==1: 
        ones.append(1) 
    elif n >0:
        pos.append(n)
    elif n <0: 
        neg.append(n) 
    else: # 0 
        zeros.append(0) 
# divide 

sumv = 0 
# pos 
pos.sort( reverse = True ) 
for i in range(0,len(pos)-1,2):
    sumv += pos[i]*pos[i+1] 
if len(pos) &1:
    sumv += pos[-1] 

if ones:
    sumv += len(ones) 

# neg

neg.sort( ) 
for i in range(0,len(neg)-1,2):
    sumv += neg[i]*neg[i+1] 

if len(neg) &1: 
    if zeros: 
        zeros.pop() 
    else: 
        sumv += neg[-1] 


print(sumv) 


