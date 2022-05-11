import re 

s = input() 

ans = re.sub('(a|e|i|o|u)p(a|e|i|o|u)' , '\\1', s) 

print(ans) 

 