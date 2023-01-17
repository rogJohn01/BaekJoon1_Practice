
global maxv 
global minv 
global smaxv
global sminv 
global N 

N = int(input())

operands = list(input().split()) 
maxv = -float('inf') 
minv = float('inf') 


def backtrack(ix, arr): 
    global maxv 
    global minv 
    global smaxv
    global sminv 


    if len(arr) == N+1: 
        sv = ''.join(arr)
        
        v = int(''.join(arr))
        if v > maxv:
            maxv = v 
            smaxv = sv 
        if v < minv: 
            minv  =v
            sminv = sv 
        return 


    for n in range(0,10): 
        
        if len(arr)==0: 
            backtrack(ix, arr+[str(n)] ) 
        else: 
            if operands[ix] =="<": 
                if int(arr[-1]) < n and str(n) not in arr: 
                    backtrack(ix+1, arr+[str(n)])
            else:  # ">"
                if int(arr[-1]) > n and str(n) not in arr: 
                    backtrack(ix+1 , arr+[str(n)])

backtrack(0,[])
print(smaxv)
print(sminv) 