#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

long long dp[101]; 


int main() { 

    int N ; 
    cin >> N ; 
    while ( N--) {
        int n; 
        cin >> n;
        dp[1] =1 ;
        dp[2] = 1 ; 
        dp[3] = 1; 
        for(int  i =4  ; i <n+1 ; i++ ) {
            dp[i] = dp[i-2] + dp[i-3] ; }
        cout << dp[n] << endl; 
    }

}

