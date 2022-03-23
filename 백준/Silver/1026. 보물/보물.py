n = int(input())
al = list(map(int, input().split()))
bl = list(map(int, input().split()))

sumv = 0
for a, b in zip( sorted(al) , sorted(bl , reverse =True )):
    
    sumv += a*b
   
print(sumv) 