N , M = map(int, input().split())
pack = [] 
ones = [] 
for _  in range(M):
    p , o = map(int, input().split())
    pack.append(p)
    ones.append(o) 


pac = min(pack)
one = min(ones) 


print( min( pac*(N//6)+pac , pac*(N//6)+ ( N%6)*one , N*one)) 
