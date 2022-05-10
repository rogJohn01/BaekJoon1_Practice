i = 1 
while True: 
    
    L , P , V = map(int, input().split()) 
    if L==P==V==0:
        break 

    sumv = 0 
    sumv += (V//P)*L 
    if V%P > L:
        sumv += L 
    else: 
        sumv += V%P
    
    print(f'Case {i}:', sumv)
    i +=1 