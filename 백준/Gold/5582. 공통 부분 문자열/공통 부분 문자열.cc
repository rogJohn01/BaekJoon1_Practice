#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#define jl "\n"
using namespace std; 

int dp[4001][4001] ; 


int main() { 
    string s1 ,s2 ; 
    cin >> s1 >> s2 ; 
    
    int maxl = 0 ; 
    for(int i=1 ; i <= s1.size() ; i++){
        for(int j=1 ; j <= s2.size() ; j++) { 
            if ( s1[i-1] == s2[j-1] ) {
                dp[i][j] += dp[i-1][j-1] +1 ;
                if (dp[i][j] > maxl){
                    maxl = dp[i][j] ; }
            }
        }}
    cout << maxl ; 

} 
