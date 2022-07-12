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
    while(true) { 

        int a,b ; cin >> a >> b ; 
        if( a == 0 && b==0 ) break ; 

        if(a % b==0) cout << "multiple" << jl ; 
        else if(b % a==0) cout << "factor" << jl ; 
        else cout << "neither" << jl ; 
    }


} 
