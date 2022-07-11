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

    int x ; cin >> x; 
    for(int i=2 ; i <=x ; i++){
        while( x%i ==0){
            cout << i << jl ; 
            x /= i ; 
        }
    }
    




} 
