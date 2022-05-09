import re 
p = re.compile('(FBI)') 

FBI = False 
res = [] 
for i in range(5): 
    s = input() 
    
    if p.search(s) is  not None: 
        FBI = True
        res.append(i+1) 
if not FBI:
    print('HE GOT AWAY!') 

else: 
    for r in res:
        print(r, end=' ') 
