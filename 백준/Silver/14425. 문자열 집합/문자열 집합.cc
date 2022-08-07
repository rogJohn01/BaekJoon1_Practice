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

    map<string,int> rec ; 
    int N , M ; cin >> N >> M ; 
    string s ; 
    while(N--){
        cin >> s ;
        rec[s] ++ ; 
    } 
    int ans ; 
    while(M--){
        cin >> s ; 
        if( rec[s]) ans ++ ; 
    } 

    cout << ans ; 



} 
