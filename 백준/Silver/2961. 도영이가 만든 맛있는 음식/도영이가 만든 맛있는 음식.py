


N = int(input())


ingredient = [] 
for _ in range(N):
    a,b = map(int ,input().split())
    ingredient.append( [a,b] )
    

def job(arr):
    
    sour = 1  ## dont' use zero. Huge mistake!  
    bitter = 0 
    for a in arr: 

        sour *= ingredient[a][0]
        bitter += ingredient[a][1] 
        

    return abs(sour-bitter)
        

def combination(ix ,box, n):
    global minv 

    if len(box) == n:
        
        #print("box: " , box  )
        minv = min(minv , job(box))
        return 


    for i in range(ix , len(ingredient)):
        if i not in box:
            combination(ix+1 , box+[i] , n)

inf = float('inf')
ans = inf 
for i in range(1, N+1): 
    
    minv = inf 
    combination(0, [] , i)
    #print("minv: " , minv )
    ans = min(ans , minv )


print(ans)


    
