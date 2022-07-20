import sys

N, M, R = map(int, sys.stdin.readline().split())
array = []
for _ in range(N):
    array.append(list(map(int, sys.stdin.readline().split())))

def rotate(i, j, n, m):
    top = array[i][j]
    left = array[n - 1][j]
    bottom = array[n - 1][m - 1]
    right = array[i][m - 1]
    for x in range(n-1, i, -1):                 
        array[x][j] = array[x-1][j]
    for x in range(i, n-1):                     
        array[x][m - 1] = array[x+1][m - 1]
    for y in range(j, m - 1):                  
        array[i][y] = array[i][y + 1]
    for y in range(m-1, j, -1):                 
        array[n - 1][y] = array[n - 1][y-1]
    array[i+1][j] = top
    array[n-1][j+1] = left
    array[n-2][m-1] = bottom
    array[i][m-2] = right


deep = min(N, M) // 2  					
cycle = (N - 1) * 2 + (M - 1) * 2  	

for i in range(deep): 				
    for _ in range(R % cycle):			
        rotate(i, i, N - i, M - i)
    cycle -= 8  						

for x in array:
    print(*x, sep=' ')