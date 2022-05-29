import re 

p = re.compile('[A-F]{0,1}A+F+C+[A-F]{0,1}')


ans = [] 
N = int(input()) 
for _ in range(N):
    
    s = input() 
    if p.fullmatch(s):
        ans.append('Infected!') 
    else: 
        ans.append('Good') 

for a in ans: 
    print(a) 