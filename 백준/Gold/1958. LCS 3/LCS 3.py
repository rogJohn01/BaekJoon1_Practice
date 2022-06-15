s1 = input()
s2 = input()
s3 = input()

s1l = len(s1)
s2l = len(s2)
s3l = len(s3)

dp = [ [  [0]*(s3l+1) for _ in range(s2l+1) ] for _ in range(s1l+1) ] 


for x in range(1,len(s1)+1):
    for y in range(1,len(s2)+1):
        for z in range(1,len(s3)+1):
            if s1[x-1] == s2[y-1] == s3[z-1]:
                dp[x][y][z] = dp[x-1][y-1][z-1] + 1 
            else:
                dp[x][y][z] = max( dp[x-1][y][z] , dp[x][y-1][z] , dp[x][y][z-1] )

print( dp[s1l][s2l][s3l]) 