#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <set> 
#include <numeric> 
#define jl "\n"
using namespace std; 

int main() { 
    
    int S ; cin >> S ; 
    int N ; cin >> N ; 
    vector<int> dp(N+1) ; 
    fill( dp.begin() , dp.end() , 1) ; 
    
    for(int i= 2 ; i <=N ; i++){
        if(dp[i]){
            for(int j =2; j*i<=N ; j++){
                if(j*i > N) break ; 
                dp[j*i] = 0 ; 
            }
        }
    }
    
   
    vector<int> tmp ; 
    if(S==1) S =2 ; 
    for(int i = S ; i <=N ; i++){
        if( dp[i]==1) tmp.push_back( i ) ; 
    }
    
    if( !tmp.empty()){ 

        cout << accumulate( tmp.begin() , tmp.end() , 0) << jl  ;  
        cout << *min_element( tmp.begin() , tmp.end() ) ; 
    }
    else { 
        cout << -1 ; 
    }
    


} 
