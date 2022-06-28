from collections import defaultdict 

dic = defaultdict(int)
N , L = map(int, input().split())
while N:
    N-=1 
    D, R ,G = map(int, input().split())
    dic[D] = [R,G ] 


time = prev = 0 
for k,v in dic.items():
    dif = k - prev 
    prev = k 
    time += dif 
    tt = time % sum(v) 
    if tt < v[0]:
        time += v[0] -tt

time += L-prev 
print(time) 