
import sys 
input = sys.stdin.readline 

n, m = map(int, input().split())
r, c, d = map(int, input().split())
 
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]
 
graph = []
for i in range(n):
    graph.append(list(map(int, input().split())))
 
def turn_left(): # 방향을 좌측으로 돌리는 함수 0인경우 3이 나온다. 1인 경우는 0이 나온다. 나머지도 마찬가지
    global d
    d = (d-1) % 4
 
count = 1
x, y = r, c
graph[x][y] = 2 # 방문처리를 2로 함
 
while True:
    check = False # 방문한 칸이 있는지 없는지 유뮤를 판단하기 위한 bool형 변수 check
    for i in range(4): # 4방향을 돌며
        turn_left()
        nx = x + dx[d]
        ny = y + dy[d]
        if 0 <= nx < n and 0 <= ny < m: # nx, ny가 그래프를 벗어나지 않는지 확인
            if graph[nx][ny] == 0: # 청소할 수 있는 칸인 경우
                count += 1
                graph[nx][ny] = 2 # 방문처리 해줌
                x, y = nx, ny
                check = True # check를 True로 바꾸어 주어 방문했음을 알림
                break
    if not check: # 4방향을 확인했음에도 청소할 공간이 없는 경우 후진
        nx = x - dx[d]
        ny = y - dy[d]
        if 0 <= nx < n and 0 <= ny < m: # nx, ny가 그래프를 벗어나지 않는지 확인
            if graph[nx][ny] == 2: # 2라면 즉 이미 청소한 칸인경우 후진
                x, y = nx, ny
            elif graph[nx][ny] == 1: # 1인경우 즉 벽인 경우 
                print(count)
                break
        else:
            print(count)
            break