import sys
input = sys.stdin.readline
import bisect

ans = [] 
while True:
    try:  
        N = int(input())
        if not N:
            break 

        nums =  list( map(int,input().split()))


        st = []
        for n in nums:
            i = bisect.bisect_left(st, n)


            if len(st) ==i:
                st.append(n)
            else:
                st[i] = n
        
        ans.append(len(st)) 
        #print(len(st) )
    except:
        break 

for a in ans:
    print(a) 