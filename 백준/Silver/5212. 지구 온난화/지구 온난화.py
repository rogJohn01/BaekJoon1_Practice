
R ,C = map(int, input().split())
mat = [ input() for _ in range(R) ] 
inf = float('inf') 
left = down = inf 
right = up =  0 
record = [] 
for r in range(R):
    for c in range(C):
        if mat[r][c] == 'X': 
            sea = 0 ; sink = False 
            for a,b in [(1,0),(-1,0),(0,1),(0,-1)]:  
                nx, ny =  r+a , c+ b 
                if   not(	0<= nx < R and 0 <= ny <C) or mat[nx][ny] =='.': 
                        sea+=1 
                        if sea >=3: 
                            sink = True 
                
            if not sink: 
                record.append([r,c]) 
                left = min(left , c)
                right = max(right , c) 
                up = max(up, r) 
                down = min(down ,r) 
            
for r in range(down,up+1):
    for c in range(left ,right+1): 
        if [r,c] in record:
            print('X',end='')
        else: 
            print('.',end='')
    print() 


