
n = int(input())
arr =  list(map(int,input().split()))  
m = int(input())
tarl =  list(map(int,input().split())) 

arr.sort()

def binSearch(x,arr):

    l , r = 0 , len(arr)-1
    while l <=r:
        m = (l+r)//2

        if arr[m] ==x:
            return 1

        elif arr[m] > x:
            r = m -1
        else:
            l = m +1 
    return 0 


for x in tarl:
    print(binSearch(x,arr))


    