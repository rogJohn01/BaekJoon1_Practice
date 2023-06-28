import sys 
input = sys.stdin.readline
N = int(input())

arr = list(map(int , input().split()))


st = [] 
ans = [-1]*N 

for i in range(N):
    a = arr[i]

    while st and arr[st[-1]] < a:
        ix = st.pop()
        ans[ix] = a 

    st.append(i)


print(*ans)