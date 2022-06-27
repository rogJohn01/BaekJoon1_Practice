
R , C = map(int, input().split())
mat = [  input() for _ in range(R) ] 

ans = [ [0]*C for _ in range(R) ] 

for r in range(R):
    cseen = False 
    for c in range(C):
        if mat[r][c] =='c': 
            ans[r][c] = 0
            m =1 
            cseen = True 
        elif mat[r][c] =='.' and not cseen:
            ans[r][c] = -1 
        elif mat[r][c] =='.' and cseen: 
            ans[r][c] = m 
            m +=1 

for a in ans:
    print(*a)