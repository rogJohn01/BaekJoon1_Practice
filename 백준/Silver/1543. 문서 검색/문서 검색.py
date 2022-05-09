import re 


text = input() 
word = input() 

p = re.compile(f'({word})') 

#print( p.findall(text) )
print( len( p.findall(text)) ) 

