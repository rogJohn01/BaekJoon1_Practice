import sys

input = sys.stdin.readline

N = int(input())
heights = [int(input()) for _ in range(N)]

count = 0
stack = []

for height in heights:
    nowcount = 1
    while stack:
        if height >= stack[-1][0]:
            count += stack[-1][1]
			
            # 현재 스택의 top과 키가 같다면
            if height == stack[-1][0]:
            	# 볼 수 있는 사람 수를 더해준다
                nowcount += stack[-1][1]
			
            # 더 이상 stack의 top을 볼 수 있는 사람이 없으므로
            # 스택에서 버린다.
            stack.pop()

        else:
            # 서로 볼 수 있는 쌍
            count += 1
            break
	
    # 스택에 해당 키를 넣는다
    # 이때, 현재 사람을 볼 수 있는 카운트를 추가
    stack.append((height, nowcount))

print(count)