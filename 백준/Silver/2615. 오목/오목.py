import sys 
grid = [ list(map(int, input().split()))  for _ in range(19)]


direct = [[1,0],[0,1],[1,1],[-1,1]]
R = C = 19 
for x in range(R):
    for y in range(C):

        if grid[x][y] !=0:
            color = grid[x][y]

            for a,b in direct:
                cnt = 1
                nx = x+a
                ny = y+b 

                while 0<= nx < 19 and 0<= ny <19 and grid[nx][ny] == color:

                    cnt +=1 

                    if cnt ==5:

                        if 0<= x-a <19 and 0<= y-b <19 and grid[x-a][y-b] == color:
                            break 
                        if 0<= nx+a <19 and 0<= ny+b <19 and grid[nx+a][ny+b] == color:
                            break 

                        print(color)
                        print(x+1,y+1)
                        sys.exit(0)

                    nx += a
                    ny += b 
print(0)