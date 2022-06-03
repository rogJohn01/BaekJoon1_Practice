
import re 

p = re.compile('[nN][eE][mM][oO]')

ans = [] 
while True: 

    s = input() 
    if s=='EOI':
        break 


    if p.findall( s):
        ans.append('Found')
    else:
        ans.append('Missing')

for a in ans:
    print(a)