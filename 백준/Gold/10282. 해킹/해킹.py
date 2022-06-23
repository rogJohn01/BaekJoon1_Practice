import sys 
input = sys.stdin.readline

import heapq as hq 
inf = float('inf') 

T = int(input()) 

while T:
    T-=1 
        
    N , D , C = map(int, input().split())
    C -=1 
    graph = [ []  for _ in range(N) ] 
    for _ in range(D):
        a ,b ,s = map(int, input().split())
        a -=1 ; b-=1 ; 
        graph[b].append([s,a] ) 

    dp =[inf]*N 

    def dijkstra(): 

        hp = [ [0,C] ] 
        dp[C] = 0 
        while hp: 
            t , node  = hq.heappop(hp)

            if dp[node] < t: 
                continue 

            for  nt , nnode  in graph[node]:
                tt = nt + t 
                if tt < dp[nnode]:
                    dp[nnode] = tt 
                    hq.heappush( hp , [tt,nnode ]) 

        cnt = maxv = 0 
        for d in dp:
            if d != inf: 
                cnt +=1 
                maxv = max(maxv, d) 
        return cnt, maxv  

    print(*dijkstra()) 