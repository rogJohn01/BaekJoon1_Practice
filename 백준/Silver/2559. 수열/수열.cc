#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <limits> 
#include <set> 
#define jl "\n"
using namespace std; 

int main() { 

    int N , K, n ; cin >> N >> K ; 
    vector<int> nums ; 
    while(N --){ cin >> n ; nums.push_back(n) ; } 
    
    
    vector<int> pfx ;
    pfx.push_back(0) ; 
    int pre = 0 ; 
    for(auto n:nums){ 
        pre += n ; 
        pfx.push_back(pre) ; } 

//    for(auto p:pfx){ cout << p << " " ; } 
  //  cout << jl ; 
    
    int ans = numeric_limits<int>:: min() ;
    for(int i= K ;  i < pfx.size() ; i ++){
        int tmp = pfx[i] - pfx[i-K] ; 
        if(tmp > ans){
            ans = tmp ;  } 
    }
    cout << ans << jl ; 


} 
