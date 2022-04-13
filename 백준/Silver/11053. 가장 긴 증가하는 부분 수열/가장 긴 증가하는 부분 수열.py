import sys, bisect
n = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))
inc_arr = [sys.maxsize]*n

for i in range(0,n):
    idx = bisect.bisect_left(inc_arr, arr[i])
    inc_arr[idx] = arr[i]
print(bisect.bisect_left(inc_arr, sys.maxsize))