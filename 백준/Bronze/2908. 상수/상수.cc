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
    string a,b ; cin >> a >> b ; 
    reverse(a.begin() , a.end()); 
    reverse(b.begin() , b.end()); 
    
    cout << ( a>b ? a:b) ;   



} 

