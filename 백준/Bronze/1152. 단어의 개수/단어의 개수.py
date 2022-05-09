import re

text = input() 

p  = re.compile('[a-zA-Z]+') 

#print( p.findall(text))
print( len(p.findall(text))) 
