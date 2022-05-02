from collections import deque 

N = int(input())
Napple = int(input())
appleinfo = [ list( map(int,input().split())) for _ in range(Napple) ]
Ndir =  int(input())
dirInfo = [ list( input().split() ) for _ in range(Ndir) ] 

mat = [ [0]*N for _ in range(N) ] 
for a, b in appleinfo:
    mat[a-1][b-1] = 'A'


def simul(x,y):

    snake =1
    dir = {0:[0,1] , 1:[1,0] , 2:[0,-1] , 3:[-1,0] }
    cdir = 0
    visit = deque()
    time = 0
    for t , ndir in dirInfo:

        t = int(t)
        ad = 1 if ndir=='D' else -1
        while time !=t:

            if x <0 or x>=N or y < 0 or y>=N:
                return time

            if visit and  [x,y] in visit:
                return time

            if mat[x][y] =='A':
                snake +=1
                mat[x][y] =0
            elif visit:
                visit.popleft()


            a, b = dir[cdir%4]
            visit.append([x,y])
            x += a ; y +=b
            time +=1

        cdir += ad

    while True:

            if x <0 or x>=N or y < 0 or y>=N:
                return time

            if visit and  [x,y] in visit:
                return time

            if mat[x][y] =='A':
                snake +=1
                mat[x][y] =0
            elif visit:
                visit.popleft()


            a, b = dir[cdir%4]
            visit.append([x,y])
            x += a ; y +=b
            time +=1


    return time

print(simul(0,0)) 