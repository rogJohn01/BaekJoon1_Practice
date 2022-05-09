
n = str(input())

def digits(n):
    if str(n).startswith('0x'):
        return  int( n , 16) 
    if str(n).startswith('0'):
        return int( n , 8)
    
    else:
        return n 

print(digits(n))