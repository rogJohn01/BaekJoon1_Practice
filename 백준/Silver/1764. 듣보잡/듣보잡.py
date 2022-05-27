


N , M = map(int, input().split())

names = set() 
for _ in range(N): 
    names.add( input()) 

ans = [] 
for _ in range(M):
    s = input() 
    if s in names: 
        ans.append(s) 

ans.sort() 
print( len(ans)) 
for a in ans:
    print(a) 