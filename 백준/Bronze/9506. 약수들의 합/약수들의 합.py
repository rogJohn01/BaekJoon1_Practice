




def getAllDivisor(x):
    
    arr = [] 
    r = int(x**(0.5)) 
    for i in range(1, r+1):
        if x %  i ==0:
            arr.append( i )
            if i*i !=x:
                if int(x/i) !=x:
                    arr.append( int(x/i )) 
    return arr 

def check(n,arr):
    arr.sort() 
    
    #print(arr)
    #print(sum(arr))

    if sum(arr) ==n:
       sbuilder(n,arr)  
    else: 
        print(f'{n} is NOT perfect.')

def sbuilder(n,arr):
    
    s =''
    for i in range(len(arr)):
        a = arr[i]
        s += str(a) 
        if  (i != len(arr)-1):
            s+= ' + '
        
    print(f'{n} = '+s )






while True:

    n =int(input())
    if n == -1: 
        break 
    
    arr = getAllDivisor(n) 
    check(n,arr)



