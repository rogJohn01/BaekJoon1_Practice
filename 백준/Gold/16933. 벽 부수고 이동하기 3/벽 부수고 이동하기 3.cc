#include <cstdio>
#include <queue>
using namespace std;

struct wall {
    int x, y, w, d;
};

int n, m, k;
bool check[1000][1000][11];
char a[1001][1001];
const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

int bfs() {
    queue<wall> q;
    q.push({0, 0, 0, 1});
    check[0][0][0] = true;
    bool day = true;
    while (!q.empty()) {
        int p = q.size();
        while (p--) {
            int x = q.front().x, y = q.front().y;
            int w = q.front().w, d = q.front().d; q.pop();
            if (x == n-1 && y == m-1) return d;
            for (int i=0; i<4; i++) {
                int nx = x+dx[i], ny = y+dy[i], nw = w+1, nd = d+1;
                if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                if (a[nx][ny] == '1' && !check[nx][ny][nw] && w < k) {
                    if (day) {
                        q.push({nx, ny, nw, nd});
                        check[nx][ny][nw] = true;
                    } else {
                        q.push({x, y, w, nd});
                    }
                }
                if (a[nx][ny] == '0' && !check[nx][ny][w]) {
                    q.push({nx, ny, w, nd});
                    check[nx][ny][w] = true;
                }
            }
        }
        day = !day;
    }
    return -1;
}

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i=0; i<n; i++) scanf("%s", a[i]);
    printf("%d\n", bfs());
    return 0;
}
