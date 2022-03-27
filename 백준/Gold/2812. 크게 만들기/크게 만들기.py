def sol(s,k):
    
    st = []
    for e in s:
        while st and st[-1] <e and k:
            st.pop()
            k -=1 
        st.append(e)

    if k:
        st =st[0:-k]

    return int(''.join(st))


n, k = map(int ,input().split())
s = input()
print(sol(s,k))