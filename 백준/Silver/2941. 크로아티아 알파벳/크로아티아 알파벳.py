
import re 

mode = '(c=|c-|dz=|d-|lj|nj|s=|z=|[a-z])'
p = re.compile(mode) 
s = input() 
print( len( p.findall(s)) ) 
