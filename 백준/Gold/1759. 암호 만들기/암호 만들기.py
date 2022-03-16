k , n = map(int, input().split())
array  = list(input().split())


vowel = ['a' ,'e', 'i' ,'o' ,'u' ] 
ret = [] 
retbox = [] 
array.sort()
def dfs(idx ,ret):
    
    if len(ret) ==k:
        ret = ''.join(ret)
        cnt =0 
        for v in vowel: 
            if v in ret:
                cnt +=1 
        if  (k-1) >cnt  and cnt >=1:
            
            print(ret )
            retbox.append(ret)
            return
        else:
            return 
    
    for i in range(len(array)):
        if not ret or (ret and ret[-1] < array[i]):
            ret.append(array[i])
            dfs(i+1, ret)
            ret.pop()


    
    
dfs(0 , [])