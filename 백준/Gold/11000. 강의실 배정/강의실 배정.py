import sys 
input = sys.stdin.readline
n = int(input())
cl = [ list(map(int,input().split() )) for _ in range(n) ]


def sol():


        start = [] ; end = [] 
        cnt = 0 
        for s ,e in cl:
            start.append(s)
            end.append(e)

        start.sort()
        end.sort() 
        j =0 
        for i in range(len(start)):

            if start[i] >= end[j]:
                cnt -=1 
                j +=1 

            cnt +=1 

        return cnt 

print(sol())