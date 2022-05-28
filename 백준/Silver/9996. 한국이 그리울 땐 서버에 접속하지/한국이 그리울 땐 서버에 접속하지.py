import re 

N = int(input()) 
pat = input() 
pat = pat.replace('*' , '[a-z]*')
p = re.compile( f'{pat}') 
ans = [] 
for _  in range(N):
    s = input() 

    if p.fullmatch( s ):
        
        #print( p.fullmatch(s))
        #print( p.findall(s)) 
        ans.append('DA')
    else: 
        ans.append('NE')

for a in ans:
    print(a) 