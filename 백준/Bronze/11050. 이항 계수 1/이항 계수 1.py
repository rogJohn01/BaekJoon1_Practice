import sys 
sys.setrecursionlimit(100000)

n , k = map(int , input().split())

def binomial(n, k):
      if k == 0 or n == k :
          return 1
      else:
          return binomial(n-1, k-1) + binomial(n-1, k)
        
print( binomial(n,k)  )