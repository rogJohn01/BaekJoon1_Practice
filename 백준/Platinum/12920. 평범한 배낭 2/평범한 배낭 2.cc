
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
int w , h , cnt ; 
vector<pair<int,int>> info ; 


int main() { 

    cin >> N >> M ; 
    
    for(int i=0 ; i < N ; i++){
        cin >> w >> h >> cnt ; 
        for(int j=0 ; cnt > 0 ; j++){
            int k = min( 1 << j , cnt ) ;
            int cw = w*k ; 
            int ch = h*k ; 
            info.push_back({cw , ch}) ; 
            cnt -= k ; 
        }

    }
    

    int sz = info.size() ; 
    int dp[sz+1][M+1] ; 
    memset(dp ,0 , sizeof(dp)) ; 


    for(int i=1 ; i <=sz ; i++){
        for(int j=1 ; j <= M ; j++){

            if(j -info[i-1].first >=0){
                dp[i][j] = max(dp[i-1][j] , dp[i-1][j-info[i-1].first] + info[i-1].second ) ;
            } else {
                dp[i][j] = dp[i-1][j] ;
            }


        }
    }
    cout << dp[sz][M] ; 



}


