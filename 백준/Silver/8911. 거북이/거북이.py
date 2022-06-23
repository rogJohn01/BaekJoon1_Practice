
T = int(input()) 

while T:
    T-=1 
    s =  input() 
    seen = set() 
    seen.add((0,0))
    x = y = 0 
    dir4 = {0:[-1,0] , 1:[0,1] , 2:[1,0] , 3:[0,-1] } 
    cdir = 0 
    for d in s: 
        
        if d in ['L','R']: 
            if d =='L':
                cdir = (cdir-1)%4 
            else: 
                cdir = (cdir+1)%4 

        else:
            if d=='F': 
                a , b = dir4[cdir] 
                x +=a ; y +=b 
            
            else: 
                a ,b = dir4[cdir] 
                x -=a ; y -=b 

            seen.add((x,y))

    left = 1000 ; right = 0 
    up = 0 ; down = 1000
    for x, y  in seen: 
        left = min(left , x)
        right = max(right , x) 
        up = max(up , y) 
        down = min(down , y) 


    print( (right-left)*(up-down) ) 



