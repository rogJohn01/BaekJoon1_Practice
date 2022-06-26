
king , stone , N = input().split()  
N = int(N) 

aldic = { chr(i+65):i   for i in range(8) } 
aldicR = { v:k  for k,v in aldic.items() } 
sign8 = ['B', 'T', 'R','L', 'LT','LB' , 'RT', 'RB' ] 
dir8 = 	[(1,0),(-1,0),(0,1),(0,-1),(-1,-1),(1,-1),(-1,1),(1,1)]
drt = { sign8[i]:dir8[i] for i in range(8) } 

x , y =  8 -int(king[1]) , aldic[king[0] ]
sx ,sy =   8 -int(stone[1]) , aldic[stone[0] ]

for _ in range(N): 
    d = input() 
    a ,b = drt[d] 
    if 0<= x+a <8 and 0<= y+b <8:
        if [x+a,y+b] ==[sx,sy]: 
            if  0<= sx+a <8 and 0<= sy+b <8:
                sx +=a ; sy+=b 
                x +=a ; y += b 
        else: 
            x +=a ; y +=b 

print( aldicR[y]+str(8-x) ) 
print( aldicR[sy]+str(8-sx) ) 


