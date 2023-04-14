
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
using namespace std; 


int N , T ;


int main() { 

    cin >> N >> T ;

    int time[N+1] ; 
    int score[N+1] ;
    int dp[N+1][T+1] ; 
    memset(dp, 0 ,sizeof(dp)) ; 

    for(int i=1; i <= N ; i++){
        cin >> time[i] ;
        cin >> score[i] ;
    }

    for(int x=1 ; x <=N ; x++){
        for(int y=1 ; y <=T ; y++){

            if( y - time[x] >=0 ){
                dp[x][y] = max(dp[x-1][y] , dp[x-1][y-time[x]] + score[x] ) ; 
            }else {
                dp[x][y] = dp[x-1][y] ; 
            }


        }
    } cout << dp[N][T] ;
    
   
}


