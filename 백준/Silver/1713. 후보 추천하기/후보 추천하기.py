from collections import defaultdict 

dic = defaultdict(int)

N = int(input()) 
K = int(input())
nums =  list( map(int,input().split())) 


t =1 
for n in nums: 
    
    if len(dic) <N or n in dic: 
        if n not in dic:
            dic[n] = [ 1, t ] 
        else:  # n in dic 
            cnt , t = dic[n] 
            dic[n] = [cnt+1,t ] 

    elif len(dic)>=N and n not in dic: 
        m = inf = float('inf') 
        for k , v in dic.items():
            cnt ,t = v 
            if cnt <=m:
                if cnt <m:
                    mink = k 
                    mint = t  
                    m = cnt 
                elif cnt==m and t < mint:
                    mink = k 
                    mint = t 
        dic.pop(mink)
        dic[n] = [1, t] 

    t +=1 

print(*sorted(dic.keys()))