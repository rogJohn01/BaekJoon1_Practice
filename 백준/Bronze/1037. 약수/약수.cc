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
    
    vector<int> nums ; 
    int N , n ; cin >> N ; 
    int  T = N; 
    while(T--){ 
        cin >> n ; nums.push_back(n) ; } 
    
    int maxv = *max_element(nums.begin(),nums.end() ) ; 
    int minv = *min_element(nums.begin() , nums.end()); 
    
    cout << maxv*minv  ; 




} 
