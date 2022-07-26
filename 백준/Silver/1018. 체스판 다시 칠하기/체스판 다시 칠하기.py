import sys 
input = sys.stdin.readline

R , C = map(int, input().split())
mat = [ list(  ' '.join(input()).split() ) for _ in range(R) ] 

inf = float('inf') 
ans = inf 
for r in range(R-7): # check range! 
    for c in range(C-7): 
        ix1 = 0 
        ix2 = 0 
        for x in range(r,r+8):
            for y in range(c ,c+8):
                
                if (x+y)%2 ==0: 
                    if mat[x][y] !='W': ix1 +=1 
                    else: ix2 +=1 
                else: 
                    if mat[x][y] != 'B': ix1 +=1 
                    else: ix2 +=1 
        
        ans = min(ans, ix1,ix2) 
print(ans) 

