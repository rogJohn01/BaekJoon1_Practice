import re 

p = re.compile('(100+1+|01)+$' ) 
s = input()
if p.match(s) is None:
    print('NOISE')
else:
    print('SUBMARINE') 


