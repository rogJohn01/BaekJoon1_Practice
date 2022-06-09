import re 

while True:
    try:
        s = input()
        ans = [0]*4  
        p = re.compile('[a-z]')
        ans[0] = len(p.findall(s))
        p2 = re.compile('[A-Z]')
        ans[1] = len(p2.findall(s))
        p3 = re.compile('\d')
        ans[2] = len(p3.findall(s))
        p4 = re.compile(' ')
        ans[3] = len(p4.findall(s))
        print(*ans) 
    except EOFError:
        break    
    