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
    int T ; cin >> T ; 
    int k , n ; 
    while(T--){ 
        cin >> k;
        cin >> n; 

        int apart[15][15] ; 
        for(int x = 0 ; x <=k ; x++){
            for(int y=1 ; y <=n ; y++){ 
                if( x==0) apart[x][y] = y ; 
                else if(y==1) apart[x][y] = 1 ; 
                else  apart[x][y] = apart[x][y-1] + apart[x-1][y] ; 
            }}
        cout << apart[k][n] << jl ; 
    }

} 
