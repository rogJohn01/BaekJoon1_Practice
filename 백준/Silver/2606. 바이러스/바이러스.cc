#include <iostream> 
#include <queue> 

using namespace std; 
#define MAX 101 

int n , m ; 
int cnt =0; 
int mat[MAX][MAX] ;
bool Visit[MAX]={0,} ; 

queue<int> q; 

void bfs(int v) { 
    q.push(v) ; 
    Visit[v] = true ; 

    while (!q.empty()){ 
        v = q.front() ; 
        q.pop() ; 

        for( auto i=1; i<=n ; i++) { 
            if ( mat[v][i] ==1 && Visit[i] ==0 ) { 
                q.push(i) ; 
                Visit[i] = true ; 
                cnt ++ ; }
        }
    }
} 

int main() { 
    cin >> n >> m ; 

    for (auto i=0 ; i< m ; i++){ 
        int x,y ; 
        cin >> x >> y ; 
        mat[x][y] =1 ;
        mat[y][x] =1 ; } 

    bfs(1) ; 
    cout << cnt ;
}