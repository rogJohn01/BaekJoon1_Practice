




mat  = [[0]*100 for _ in range(100)]



a =4 
while a:
    a -=1
    x1, y1, x2, y2 = map(int, input().split())
    for r in range(x1, x2):
        for c in range(y1,y2):
            mat[r][c] =1 


ans = 0 
for r in range(100):
    for c in range(100):
        if mat[r][c]: ans +=1 


print(ans)




