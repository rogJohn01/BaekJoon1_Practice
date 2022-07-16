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

int helper(int a){
    int tmp = a ; 
    while(a){ 
        tmp += a%10 ; 
        a /= 10; 
    }
    return tmp ; 
}

int main() { 
    
    int N ; cin >> N ; 
    for(int x = 1; x<N ; x++){
        int tmp = helper(x) ; 
        if(tmp ==N) {
            cout << x ; 
            return 0; }  
   }

    cout << 0 << jl ;  
} 
 
