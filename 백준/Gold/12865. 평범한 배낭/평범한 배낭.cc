#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#define jl "\n"
using namespace std; 

int main() { 
    int N , W ; 
    cin >> N >> W ; 
    
    vector<int> dp(W+1) ; 
    int w ,v ; 
    while( N--) { 
        cin >> w >> v ; 
        for(int i = W ; i >= w ; i--){
            dp[i] = max( dp[i] , dp[i-w] + v ) ; 
        } 
    }

    cout << dp[W] ; 


} 
