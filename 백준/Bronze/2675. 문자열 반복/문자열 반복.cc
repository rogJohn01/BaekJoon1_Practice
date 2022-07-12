
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <set> 
#define jl "\n"
using namespace std; 

int main() { 
    
    int TC ; cin >> TC ; 
    while(TC--){

        int T ; cin >> T ; 
        string s ; cin >> s;  
        string ans = "" ; 
        int i = 0 , sl = s.size() ; 
        while(sl--){ 
            
            int t = T ; 
            string tmp = "" ; 
            while(t--) tmp+=s[i] ; 
            ans += tmp ;
            i ++ ;  
        }
        cout << ans << jl ; 
    }
} 
