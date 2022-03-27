import sys 

input = sys.stdin.readline
n = int(input())
crains = list(map(int,input().split()))
m = int(input())
boxes = list(map(int,input().split()))


crains.sort(reverse= True )
boxes.sort( reverse = True )

if max(crains) < max(boxes):
    print(-1)
    
else:
    time = 0
    while boxes:
        
        if not boxes:
            break 

        for crain in crains: 
            for box in boxes:
                if crain >= box:
                    boxes.remove(box)
                    break 

        time +=1 
    print(time)