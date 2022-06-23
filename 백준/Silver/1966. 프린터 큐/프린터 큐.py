from collections import deque 

T =int(input()) 
while T:
    T -=1 
    N , tar = map(int, input().split())
    nums =  list( map(int,input().split())) 
    q = deque(nums) 
    prtn = 0
    while True:
        
        x = q.popleft() 
        tar -=1 
        back = False 
        for i in range(len(q)):
            if q[i] > x: 
                q.append(x) 
                back = True 
                if tar <0: 
                    tar = len(q) -1
                break 
                    
        if not back: 
            prtn +=1 
            if tar <0: 
                print(prtn) 
                break 
