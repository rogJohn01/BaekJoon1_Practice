import sys 
input = sys.stdin.readline 

x, y ,w , h = map(int ,input().split())

yd = h - y 
yzd = y 
xd = w- x 
xzd = x 


print( min( yd,yzd,xd,xzd) ) 