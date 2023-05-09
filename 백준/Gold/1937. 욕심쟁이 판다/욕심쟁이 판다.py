import sys

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

n = int(sys.stdin.readline())
bamboo = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
dp = [[1]*n for _ in range(n)]

# List of all cells
cells = [(bamboo[i][j], i, j) for i in range(n) for j in range(n)]
# Sort cells in ascending order of their values
cells.sort()

for _, x, y in cells:
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if 0 <= nx < n and 0 <= ny < n and bamboo[x][y] < bamboo[nx][ny]:
            dp[nx][ny] = max(dp[nx][ny], dp[x][y] + 1)

print(max(max(row) for row in dp))

