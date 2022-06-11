N = int(input())

for _ in range(N):
    
    s = input()
    if 'Simon says' in s:
        s = s.replace('Simon says','',1)
        print(s)