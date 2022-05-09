import re 
p = re.compile('[aeiouAEIOU]') 

res = [] 
while True: 
    s = input() 
    if s == '#':
        break 
    
    if p.findall(s) != []: 
        print( len(p.findall(s)))
    else:
        print(0) 
