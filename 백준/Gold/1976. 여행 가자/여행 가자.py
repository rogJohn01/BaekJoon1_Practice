
N = int(input()) 
M = int(input()) 
mat = [ list( map(int,input().split())) for _ in range(N) ]
path =  list( map(int,input().split())) 


def find(x):
    if parent[x] !=x: 
        parent[x] = find(parent[x])
    return parent[x]

def union(a,b):

    a = find(a)
    b = find(b) 

    if a <b: 
        parent[b] =a 
    else:
        parent[a] =b 

parent = [ i  for i in range(N+1) ] 
box = [] 
R = len(mat) ; C = len(mat[0]) 
for r in range(R):
    for c in range(C):
        if mat[r][c] == 1:
            box.append([r+1,c+1]) 

for a,b in box:
    union(a,b) 

tmp = [] 
fin = False 
for p in path:
    if tmp and tmp[-1] != find(p):
        print('NO')
        fin = True 
        break 
    tmp.append( find(p))

if not fin:
    print('YES') 