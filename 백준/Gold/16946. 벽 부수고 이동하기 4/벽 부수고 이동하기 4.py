
from collections import deque
from sys import stdin, stdout
input = stdin.readline
print = stdout.write

n, m = map(int, input().split())
a = [list(input()) for _ in range(n)]
b = [[0]*m for _ in range(n)]
v = [0]
check = [[False]*m for _ in range(n)]
dx, dy = (-1, 0, 1, 0), (0, 1, 0, -1)

def bfs(x, y, z):
    q = deque()
    q.append((x, y))
    check[x][y] = True
    cnt = 1
    while q:
        x, y = q.popleft()
        b[x][y] = z
        for k in range(4):
            nx, ny = x+dx[k], y+dy[k]
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            if not check[nx][ny] and not a[nx][ny]:
                q.append((nx, ny))
                check[nx][ny] = True
                cnt += 1
    return cnt

def flood():
    z = 1
    for i in range(n):
        for j in range(m):
            if not a[i][j] and not check[i][j]:
                v.append(bfs(i, j, z))
                z += 1

def solve():
    for i in range(n):
        for j in range(m):
            if a[i][j]:
                s = set()
                for k in range(4):
                    ni, nj = i+dx[k], j+dy[k]
                    if 0 <= ni < n and 0 <= nj < m:
                        s.add(b[ni][nj])
                for k in s:
                    a[i][j] += v[k]
                    a[i][j] %= 10

for i in range(n):
    for j in range(m):
        if a[i][j] == '0':
            a[i][j] = 0
        else:
            a[i][j] = 1
flood()
solve()
for i in range(n):
    print(''.join(map(str, a[i])))
