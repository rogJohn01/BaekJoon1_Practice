#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
#define MAX 1001
#define WALL 11
#define INF 987654321
using namespace std;

struct node {
    int x,y,wall,cnt;
    
    node() {}
    node(int _x,int _y,int _wall,int _cnt) : x(_x),y(_y),wall(_wall),cnt(_cnt) {}
};

int n,m,k;

int map[MAX][MAX];
bool visited[MAX][MAX][WALL];

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void bfs(){
    queue<node> q;
    q.push(node(0,0,0,1));
    visited[0][0][0] = true;
    
    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int wall = q.front().wall;
        int cnt = q.front().cnt;
        q.pop();
        
        if(x == n-1 && y == m-1){
            printf("%d\n",cnt);
            return;
        }
        
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            
            // 벽을 만난 경우
            if(map[nx][ny] == 1){
                // 벽을 부술 수 있음!
                if(wall < k && !visited[nx][ny][wall+1]){
                    q.push(node(nx,ny,wall+1,cnt+1));
                    visited[nx][ny][wall+1] = true;
                }
            }
            
            // 벽이 아닌 경우
            if(map[nx][ny] == 0 && !visited[nx][ny][wall]){
                q.push(node(nx,ny,wall,cnt+1));
                visited[nx][ny][wall] = true;
            }
        }
    }
    printf("%d\n",-1);
}

int main(int argc, const char * argv[]) {
    // cin,cout 속도향상
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> m >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%1d",&map[i][j]);
        }
    }
    
    memset(visited, false, sizeof(visited));
    bfs();
    
    return 0;
}