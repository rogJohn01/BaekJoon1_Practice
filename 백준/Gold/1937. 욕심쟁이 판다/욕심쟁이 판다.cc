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
using namespace std; 
int N ; 
int mat[501][501] ;
int dp[501][501] ; 
int dx[4] = {1,-1,0,0} ; 
int dy[4] = {0,0,1,-1} ; 
int ans =0 ; 

int dfs(int x, int y){

    if( dp[x][y] != -1 ) return dp[x][y] ; 
    dp[x][y] =1 ; 

    for(int i=0; i < 4; i++){
        int nx = x+dx[i], ny = y+dy[i] ;
        if(0<=nx && nx < N && 0<= ny && ny < N )
            if( mat[nx][ny] > mat[x][y] ) 
                dp[x][y] = max(dp[x][y] , dfs(nx,ny)+1); 
     }
    return dp[x][y] ; 
    }


int main() { 
    
    cin >> N ; 
    for(int r=0; r < N ; r++){
        for(int c=0 ; c < N ; c++){
            cin >> mat[r][c] ; 
            dp[r][c] = -1 ; 
        }
    }
   
        
    for(int r=0; r < N ; r++){
        for(int c=0 ; c < N ; c++){
            ans = max(ans , dfs(r,c))  ; 
        }
    }
    cout << ans ; 
    
}