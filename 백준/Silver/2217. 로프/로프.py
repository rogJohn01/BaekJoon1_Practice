def solution():
    arr.sort(reverse=True) # 내림차순으로 정렬
    for i in range(N): # 1부터 N까지 곱하는 식
        arr[i] = arr[i] * (i + 1)

    return max(arr) # 계산한 값 중 가장 큰 값을 리턴해준다. 
 
N = int(input())
arr = []
for _ in range(N):
    arr.append(int(input()))
 
print(solution())