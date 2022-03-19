
n = int(input())

roadlist = list(map(int,input().split()))
gas = list(map(int,input().split()))



cost = 0
mincost = gas[0]
for i, road in enumerate(roadlist):

	if gas[i] < mincost:
		mincost = gas[i]

	cost += mincost *road 

print(cost)
