
import sys
input = sys.stdin.readline 

n = int(input())
hwl = [ list(map(int, input().split())) for _ in range(n)] 
hwl.sort(key = lambda x:-x[1])

cnt =0 
days = [0]*1001
for hw in hwl:
    for d in range(hw[0],0,-1):
        if days[d] ==0:
            days[d] =1
            cnt += hw[1]
            break 

print(cnt)