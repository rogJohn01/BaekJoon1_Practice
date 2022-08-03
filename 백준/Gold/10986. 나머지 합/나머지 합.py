N , M = map(int, input().split())
arr =  list( map(int,input().split())) +[0] 
cnt = [0]*M

for i in range(N):
    arr[i] += arr[i-1] 
    cnt[arr[i]% M ] +=1 

ans = cnt[0] 

for c in cnt: 
    ans += c*(c-1) //2 

print(ans) 