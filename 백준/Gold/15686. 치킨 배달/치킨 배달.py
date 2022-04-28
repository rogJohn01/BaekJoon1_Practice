from itertools import  combinations as comb 

import sys 
input = sys.stdin.readline

N , M =  map(int,input().split())
mat= [ list( map(int,input().split())) for _ in range(N) ]
R = C = N 



ckhouse = [] 
house = [] 
for r in range(R):
    for c in range(C):
        if mat[r][c] ==2:
            ckhouse.append([r,c]) 
        if mat[r][c] ==1:
            house.append([r,c]) 

mcity = float('inf') 
for x in range(1,M+1): 
    for ckloco in comb(ckhouse , x):
        
        cityCk  = 0 
        for hx ,hy in house: 
            minv = float('inf') 
            for cx ,cy in ckloco:
                minv = min( minv,  abs(hx-cx)+abs(hy-cy) )
            
            cityCk  += minv 
        mcity = min(mcity , cityCk) 

print(mcity) 


