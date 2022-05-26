
def checker(s):

    seen = set() 
    for i,e in enumerate(s):
        
        if e not in seen:
            seen.add(e) 

        elif e in seen and s[i-1] !=e:
            return False 
    
    return True 





cnt =0 
N = int(input()) 
for _ in range(N):

    s = input() 
    if checker(s):  
        cnt +=1 


print(cnt) 