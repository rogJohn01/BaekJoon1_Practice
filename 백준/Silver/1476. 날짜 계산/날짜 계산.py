
E , S, M = map(int, input().split())
E %= 15 ; S %=28 ; M %= 19

n = 1
e = s = m = 1 
while True: 

    if [E,S,M] == [e,s,m]: 
        print(n)
        break 

    e = (e+1) % 15
    s = (s+1) % 28
    m = (m+1) % 19

    n+=1 


