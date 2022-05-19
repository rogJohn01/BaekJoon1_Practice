n=int(input())
k=int(input())
sensor=list(map(int,input().split()))
sensor.sort()
btwss = [sensor[i]-sensor[i-1] for i in range(1,n)]
btwss.sort()

if k >= n : print(0)
else : #k<n
  for i in range(k-1) :
    btwss.pop()
  print(sum(btwss))