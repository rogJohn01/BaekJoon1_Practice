N = int(input()) 

s = input() 

import re 

p = re.compile('[0-9]{1,6}')


tmp =  p.findall(s)
print( sum( int(e) for e in tmp)) 

