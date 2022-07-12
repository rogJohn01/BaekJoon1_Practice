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

    int n ; cin >> n ; 
    string s ; cin >> s ; 

    int ans = 0 ; 
    for(auto e:s){
        ans += (int)e - '0'  ; } 

    cout << ans ;


} 
