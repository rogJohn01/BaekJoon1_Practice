from sys import stdin
from collections import deque


def visitable(r, c):
    return 0 <= r < N and 0 <= c < N and board[r][c]


def rotate(loc, l):
    cur_r, cur_c = loc


    for r in range(l):
        for c in range(l):
            # read ↑
            temp[r][c] = board[cur_r + l - 1 - c][cur_c + r]

    for r in range(l):
        for c in range(l):
            # write →
            board[cur_r + r][cur_c + c] = temp[r][c]


def simulation(l):
    for r in range(0, N, l):
        for c in range(0, N, l):
            rotate((r, c), l)

    check = [[0 for _ in range(N)] for _ in range(N)]

    for r in range(N):
        for c in range(N):
            if not board[r][c]:
                continue

            adj_cnt = 0
            for dr, dc in dirs:
                next_r, next_c = r + dr, c + dc
                if visitable(next_r, next_c):
                    adj_cnt += 1

            check[r][c] = 1 if adj_cnt < 3 else 0

    for r in range(N):
        for c in range(N):
            if check[r][c]:
                board[r][c] -= 1


def bfs(start):
    q = deque([start])
    cnt = 1

    while q:
        cur_r, cur_c = q.popleft()
        for dr, dc in dirs:
            next_r, next_c = cur_r + dr, cur_c + dc

            if visitable(next_r, next_c) and not visited[next_r][next_c]:
                visited[next_r][next_c] = 1
                q.append((next_r, next_c))
                cnt += 1

    return cnt


if __name__ == '__main__':
    N, Q = map(int, stdin.readline().split())
    N = 2 ** N
    board = [list(map(int, stdin.readline().split())) for _ in range(N)]

    L = list(map(int, stdin.readline().split()))
    max_l = max(L)
    temp = [[0 for _ in range(2 ** max_l)] for _ in range(2 ** max_l)]
    visited = [[0 for _ in range(N)] for _ in range(N)]
    dirs = ((-1, 0), (1, 0), (0, -1), (0, 1))

    for cur_l in L:
        simulation(2 ** cur_l)

    sum_ice = sum(sum(board, []))
    print(sum_ice)

    max_ice = 0
    for i in range(N):
        for j in range(N):
            if board[i][j] and not visited[i][j]:
                visited[i][j] = 1
                max_ice = max(max_ice, bfs((i, j)))

    print(max_ice)