from collections import defaultdict
import sys 
input = sys.stdin.readline 


N = int(input())
arr = list( map(int, input().split()) ) 



arr_ln = len(arr)

ans = [0]*arr_ln
mp = defaultdict(int)
for a in arr: 
    mp[a] +=1 



st = [] 
for i in range(arr_ln):

    while st and mp[arr[st[-1]]] < mp[arr[i]]:
        ix = st.pop()
        ans[ix] = arr[i]

    st.append(i)


while st: 
    ix =st.pop()
    ans[ix] = -1 

print(*ans)