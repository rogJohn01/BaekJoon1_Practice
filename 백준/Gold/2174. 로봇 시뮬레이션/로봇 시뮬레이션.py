C , R = map(int, input().split())
N , M = map(int, input().split())


mat = [ [0]*C for _ in range(R) ] 
i = 1 
robots = [] 
for _ in range(N): 
    y , x  , d = input().split() 
    x =int(x) ; y = int(y) 
    x = R-x ; y -=1 
    robots.append( [ x,y, d]) 
    mat[x][y] =  i 
    i +=1 
   
orders = [] 
for _ in range(M): 
    idr , d , rep =input().split() 
    idr = int(idr) ; rep = int(rep) 
    orders.append( [ idr , d ,rep ]) 


dircv = {'N':0 , 'E':1 , 'S':2 , 'W':3 } 
dircvR = { v:k for k,v in dircv.items() } 
dir4 = { 0:[-1,0] , 1:[0,1] , 2:[1,0] , 3:[0,-1] } 

"""
print(mat)
print(robots)
print(orders) 
""" 

odx = 0 
while odx < len(orders): 
    idr , d , rep = orders[odx] 
    x , y , D = robots[idr-1] 
    
    if d in ['L','R']:
        while rep:
            rep -=1 
            if d=='L': 
            
                D = dircvR[ (dircv[D]-1)%4 ] 
            else: 
                D = dircvR[ (dircv[D]+1)%4 ] 
        robots[idr-1] = [x,y,D]

    else: 
        mat[x][y] = 0 
        while rep:
            rep -=1 
            a , b = dir4[dircv[D]]
            x +=a ; y +=b 
            if not( 0<= x < R and 0 <= y <C): 
                print( f'Robot {idr} crashes into the wall')
                exit() 
            if mat[x][y] >=1:
                print( f'Robot {idr} crashes into robot {mat[x][y]}')
                exit()
        
        mat[x][y] = idr
        robots[idr-1] = [x,y,D]


    odx +=1 

print('OK') 

