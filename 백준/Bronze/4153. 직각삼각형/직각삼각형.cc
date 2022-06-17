#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#define jl "\n"
using namespace std; 

int main() { 
    int n ; 
    int a , b, c ; 
    while (true) { 

        vector<int> tmp ;
        int t = 3; 
        while(t--) {
            cin >> n ; 
            tmp.push_back(n) ;  }
        
        sort(tmp.begin() , tmp.end() ) ; 
        a = tmp[0] ; b = tmp[1] , c = tmp[2] ; 
        if( a==0 && b ==0 && c==0) {
            break ; } 
        if( pow(a,2)+ pow(b,2) == pow(c,2) ){
            cout << "right" << jl ; }
        else { 
            cout << "wrong" << jl ; }

    }

} 
