from sys import stdin
from collections import deque


def visitable(x, y, visited):
    return 0 <= x < 8 and 0 <= y < 8 \
           and graph[x][y] == '.' and not visited[x][y]


def bfs(start):
    q = deque([start])
    dirs = ((0, 0),
            # 상하좌우
            (0, 1), (0, -1), (1, 0), (-1, 0),
            # 대각선
            (1, 1), (1, -1), (-1, 1), (-1, -1))

    while q:
        # 벽이 이동한 후에, 다시 체크해줘야한다.
        visited = [[False] * 8 for _ in range(8)]
        for _ in range(len(q)):
            cur_x, cur_y = q.popleft()

            if [cur_x, cur_y] == [0, 7]:
                return 1

            if graph[cur_x][cur_y] == '#':
                continue

            for x, y in dirs:
                next_x, next_y = cur_x + x, cur_y + y

                if visitable(next_x, next_y, visited):
                    visited[next_x][next_y] = True
                    q.append([next_x, next_y])

        # 행을 아래로 이동
        graph.pop()
        graph.insert(0, ['.', '.', '.', '.', '.', '.', '.', '.'])

    return 0


if __name__ == '__main__':
    graph = [list(stdin.readline().strip()) for _ in range(8)]
    print(bfs([7, 0]))