tn = int(input())

for _ in range(tn):
    n , m = map(int,input().split())
    sr = [ list(map(int,input().split()))   for _ in range(m)]

    sr.sort( key= lambda x:x[1])

    cnt =0 

    books = [1]*(n+1)

    for a, b in sr:

        for i in range(a,b+1):

            if books[i] ==1:
                books[i] =0
                cnt +=1 
                break 
                
    print(cnt)
                