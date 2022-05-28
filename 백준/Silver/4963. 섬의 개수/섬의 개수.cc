
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

int mat[50][50] ;
int dx[] = {1,-1,0,0,-1,1,-1,1};
int dy[] = {0,0,-1,1,-1,-1,1,1};
int C, R; 

int dfs(int x, int y){ 

    if (x <0 or x>=R or y < 0 or y >=C) return 0; 

    if (mat[x][y] !=1) return 0 ; 

    mat[x][y] = -1 ; 
    for(int i =0; i < 8 ; i++){ 
        int nx = x+ dx[i] ; 
        int ny = y+ dy[i] ; 
        dfs(nx,ny) ;  } 
    
    return 0; 
}




int main() { 
    
    vector<int> ans ;

    while (true) { 
        
        cin >> C >> R ; 
        if( C ==0 && R ==0) break ; 
        
        for(int r=0; r <R ; r++){ 
            for(int c=0 ; c< C; c++){ 
                cin >> mat[r][c] ; }} 
    
        int cnt=0; 
        for(int r=0 ; r < R ; r++) { 
            for(int c=0 ; c< C ; c++) {
                if ( mat[r][c] ==1) { 
                    dfs(r,c) ; 
                    cnt ++ ;  } }} 
        ans.push_back(cnt) ; 
    }
    
    for(auto a:ans) { 
        cout << a << endl ; }  

} 
