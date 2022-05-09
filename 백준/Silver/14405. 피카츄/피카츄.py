import re

text = input() 

rtext = re.sub('pi|ka|chu' , '', text ) 

if not rtext: 
    print('YES')
else: 
    print('NO') 
