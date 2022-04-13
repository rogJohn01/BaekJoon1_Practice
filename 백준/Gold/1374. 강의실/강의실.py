import sys 
input = sys.stdin.readline 


n = int(input())
lectures = [  list( map(int,input().split()))  for _ in range(n) ] 


start = [] 
end = [] 
for i , s , e in lectures:
    start.append(s)
    end.append(e)

start.sort()
end.sort()



cnt = 0 
j = 0 
for s in start:
    
    if s>= end[j]:
        cnt -=1
        j +=1 
    cnt +=1 

print(cnt)