
s1 = input()
s2 = input() 

ls1 = len(s1) 
ls2 = len(s2)

dp = [ [0]*(ls2+1) for _ in range(ls1+1) ] 

for r in range(1,ls1+1):
    for c in range(1, ls2+1):
        if s1[r-1] == s2[c-1]:
            dp[r][c] = dp[r-1][c-1] +1 
        else: 
            dp[r][c] = max( dp[r-1][c] , dp[r][c-1] ) 

print( dp[-1][-1] ) 
