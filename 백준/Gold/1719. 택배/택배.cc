
#include <iostream>
#include <vector> 
#include <string> 
#include <cstring> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <set> 
#define jl "\n"
#define ll long long 
#define vv vector<vector<int>>  
using namespace std; 

int N , M ; 

int a , b , c ; 

int dp[201][201] ; 
int mat[201][201] ; 

void input(){

for(int i = 0; i < 201; i++){
    for(int j = 0; j < 201; j++){
        dp[i][j] = 1e9;
        mat[i][j] = 0 ; 
    }
}


    cin >> N >> M ; 
    int T = M ; 
    while(T--){
        cin >> a >> b >> c ;
        mat[a-1][b-1] = b-1 ;
        mat[b-1][a-1] = a-1 ;

        dp[a-1][b-1] = c   ; 
        dp[b-1][a-1] = c ; 
    }

}

void floyd_warshall(){

    for(int k=0 ; k < N ; k++){
        for(int x =0 ; x < N ; x++){
            for(int y= 0; y < N ; y++){
                if(x==y) continue ; 
                if(x==k) continue;
                if(y==k) continue ; 

                if(  dp[x][y] > dp[x][k]+ dp[k][y]){
                    dp[x][y] = dp[x][k] + dp[k][y] ; 
                    mat[x][y] = mat[x][k] ; 
                }
            }
        }
    }


}

void print(){
    for(int r=0; r < N ; r++){
        for(int c=0; c < N ; c++){
            if(r==c) cout << '-' << " " ;
            else  cout << mat[r][c]+1  << " " ;
           
        } cout << endl ;
    }
}



int main() { 
    
    input() ; 

    floyd_warshall() ; 

    print() ; 


}


