aldic = { chr(i+65):i for i in range(6) } 


def knightMove(x,y,px,py): 
    if ( abs(x-px) ==1 and abs(y-py)==2 ) or ( abs(x-px)==2 and abs(y-py) ==1):
        return True 
    else: 
        return False 

visit = set() 
N = 36
while N:
    N -=1

    s = input() 
    x,y = 6-int(s[1]) , aldic[s[0]]
    if N ==35 or N==0:
        if N ==35:
            first = [x,y] 
            px,py = x,y 
            visit.add((x,y)) 
            continue 
        else: 
            px ,py = first 
            if knightMove(x,y,px,py) and (x,y) not in visit:
                print('Valid')
            else: 
                print('Invalid')
            break 
            

    
    if (x,y) not in visit and knightMove(x,y,px,py):
        visit.add((x,y))
    else: 
        print('Invalid')
        break

    px ,py = x,y 
