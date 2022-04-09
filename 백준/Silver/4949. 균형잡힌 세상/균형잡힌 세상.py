


def sol(s):
    
    st = [] 
    sym = ['(','[',']',')']
    table = {']':'[', ')':'('}
    for e in s:
        if e in sym:

            if e not in table:
                st.append(e)

            elif st and st[-1] ==table[e]:
                st.pop()
            else: 
                print('no')
                return 
    if not st:
        print('yes')
    else:
        print('no')
while True:
    s = input().rstrip()
    if s == '.':   
        break
    
    sol(s)