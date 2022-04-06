import copy 


import sys 
sys.setrecursionlimit(10**7)
input = sys.stdin.readline 
m = int(input())
grid = [  list(' '.join(input()).split() )  for _ in range(m) ] 


mat = copy.deepcopy(grid)

def dfs(x,y,color):

    if x < 0 or x>= R or y < 0 or y >= C:
        return 
    if mat[x][y] !=color:
    	return 

    mat[x][y] ='#'



    for a,b in [(1,0),(-1,0) , (0,1) , (0,-1)]:
    	dfs(x+a, y+b ,color )



R = len(mat) ; C = len(mat[0])
cnt = 0 
for r in range(R):
	for c in range(C):
		if mat[r][c] !='#':
			dfs(r,c , mat[r][c])
			cnt +=1 


mat = copy.deepcopy(grid)

def dfs(x,y,color):

    if x < 0 or x>= R or y < 0 or y >= C:
        return 
    if mat[x][y] not in color: # or !=color 
    	return 
    mat[x][y] ='#'
    for a,b in [(1,0),(-1,0) , (0,1) , (0,-1)]:
    	dfs(x+a, y+b ,color )


R = len(mat) ; C = len(mat[0])
cnt2 = 0 
for r in range(R):
	for c in range(C):
		if mat[r][c] !='#':
			if mat[r][c] in ['R','G']:
				dfs(r,c, ['R','G'] )
			else:
				dfs(r,c , [mat[r][c]] )
			cnt2 +=1 
            
            
            
print(cnt, cnt2)
