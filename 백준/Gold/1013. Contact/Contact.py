
import re 

p = re.compile('(100+1+|01)+' ) 
N = int(input()) 
for _ in range(N):
    s = input()
    if p.fullmatch(s) is None:
        print('NO')
    else:
        print('YES') 


