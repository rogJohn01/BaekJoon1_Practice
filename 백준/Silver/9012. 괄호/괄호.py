n = int(input())


def parenthesis(pl):

    stack = [] 
    table = {')':'('}

    for p in pl:

        if p not in table:
            stack.append(p)

        elif not stack or stack.pop() !=table[p]:
            print('NO')
            return
   
        
    return  print('YES') if len( stack) ==0  else print('NO')

for _ in range(n):
    tmp = input()
    parenthesis(tmp)