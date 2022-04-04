from collections import Counter
import sys 
input = sys.stdin.readline 

n = int(input())
arr =  list(map(int,input().split()))  
m = int(input())
tarl =  list(map(int,input().split())) 

cntr =Counter(arr)


for x in tarl:
    print(cntr[x], end=' ')
