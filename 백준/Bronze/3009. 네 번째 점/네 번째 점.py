import sys 
input = sys.stdin.readline 

cord = [ list(map(int, input().split())) for _ in range(3) ]

maxX = maxY = -1 
minX = minY = 1001
for x, y in cord:

	maxX = max(maxX , x)
	minX = min(minX ,x)
	maxY = max(maxY , y)
	minY = min(minY,y)

corner = [[maxX,maxY],[maxX,minY] ,[minX,maxY] ,[minX,minY] ]
for corn in corner:
	if corn not in cord:
		print(*corn)
