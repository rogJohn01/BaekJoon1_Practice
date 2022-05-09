



import re

p  = re.compile('[0-9]+') 

twl = [] 
N = int(input()) 

for _ in range(N):

    text = input() 
    wl =  p.findall(text)
    wl =  list( map(int, wl )) 
    twl += wl 


twl.sort()  
for n in twl:
    print(n) 






