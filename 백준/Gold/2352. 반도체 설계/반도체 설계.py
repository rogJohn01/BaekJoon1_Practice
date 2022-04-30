import sys 
input = sys.stdin.readline
import bisect 

N = int(input())

nums =  list( map(int,input().split())) 


st = [] 
for n in nums: 
    i = bisect.bisect_left(st, n) 


    if len(st) ==i: 
        st.append(n) 
    else:
        st[i] = n 

print(len(st) ) 




