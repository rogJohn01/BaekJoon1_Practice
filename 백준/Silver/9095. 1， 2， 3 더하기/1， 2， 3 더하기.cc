#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 


int dp[11] ;

int main() { 
    
    vector<int> ans; 

    int N; 
    cin >>N; 
    for( int a =0 ; a<N; a++){ 

        int n ; 
        cin >> n ; 

        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4; 
        for( int i = 4; i <=n ; i++) { 
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3] ;}
        
        ans.push_back(dp[n]) ; 
    }
    for(int b =0 ; b < ans.size(); b++){
        cout << ans[b] << endl;  } 
    
} 

