
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
int N , M ; 
int maxv = pow(2,31) -1 ; 


int main() { 

    cin >> N >> M ; 

    int dp[N+1][10001] ;
    memset(dp, 0, sizeof(dp));
    int memory[N+1] ;
    int cost[N+1] ; 
    int ans = maxv ; 
    for(int i=1 ; i<= N; i++){
        cin >> memory[i]  ; 
    }
    for(int i=1 ; i<= N; i++){
        cin >> cost[i]  ; 
    }

    for(int x=1 ; x <=N ; x++){
        for(int y=1 ; y <= 10000 ; y++){

            if( y  >= cost[x] ){
                dp[x][y] = max( dp[x-1][y] , dp[x-1][y-cost[x]] + memory[x] ) ;
            } else {
                dp[x][y] = dp[x-1][y] ;
            }
            if(M<= dp[x][y]){
                ans = min(ans , y) ; 
            }
        }
    } cout << ans ;


}


