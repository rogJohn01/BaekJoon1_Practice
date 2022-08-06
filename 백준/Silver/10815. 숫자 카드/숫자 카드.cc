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


    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int N , M , n , m ; 
    cin >> N ; 
    map<int,int> record ; 
    while(N--){
        cin >> n ; 
        record[n] ++ ;  
    }  
    cin >> M ; 
    while(M--){
        cin >> m  ; 
        cout << record[m] << " " ; } 

} 

