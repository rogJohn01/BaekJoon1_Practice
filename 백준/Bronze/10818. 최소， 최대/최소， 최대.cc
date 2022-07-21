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

    int T,n ; cin >> T ; 
    vector<int> nums ; 
    while(T--){ cin >> n ; nums.push_back(n) ; } 

    cout << *min_element(nums.begin() , nums.end()) << " " ; 
    cout << *max_element(nums.begin(), nums.end()) << " "  ; 



} 
