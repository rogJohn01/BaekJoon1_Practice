
N = int(input()) 
s = input() 

dir4 = { 0:[-1,0] , 1:[0,1] , 2:[1,0] , 3:[0,-1] }
mat = [ ['#']*101 for _ in range(101)  ] 
d = 2 
left =  down =50 
right = up = 50 
x = y = 50 
mat[50][50] = '.'
for e in s: 
    if e =='F':
        a,b = dir4[d] 
        x +=a ; y+=b 
        mat[x][y] = '.'
        left = min(left , y)
        right = max(right ,y)
        up = max(up, x)
        down = min(down , x)
        
    else: 
        if e=='R': 
            d = (d+1) % 4 
        else: 
            d = (d-1) % 4 

for r in range(down, up+1):
    for c in range(left,right+1):
        print(mat[r][c] , end='')
    print() 





