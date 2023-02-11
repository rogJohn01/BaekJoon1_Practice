#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>
#include <set>
#define jl "\n"
#define mx 501 
using namespace std;

int dx[4] ={1,-1,0,0} ; 
int dy[4] ={0,0,1,-1} ; 
//int mx = 501  ; 
int mat[mx][mx] ;
int dp[mx][mx] ;
int R , C  ; 


int dfs(int x,int y){ 
    
    if(x==R-1 && y==C-1) 
        return 1  ; 

    if( dp[x][y] !=-1) return dp[x][y] ; 

    int ways =0 ; 
    for(int i=0; i<4 ; i++ ){
        int nx = x+dx[i] ,  ny= y+ dy[i];
        if(0<= nx && nx < R && 0<= ny && ny < C ){
            if( mat[x][y] > mat[nx][ny]){
                ways += dfs(nx,ny) ; 
            }
        }
    }
    dp[x][y] = ways ; 
    return dp[x][y] ; 
}

int main() {
    
    cin >> R >> C ; 
    for(int r=0; r < R ; r++){
        for(int c=0; c< C ; c++){
            cin >> mat[r][c] ; 
            dp[r][c] = -1 ; 
        }
    }
    cout << dfs(0,0 ) ;  
}
