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
    while(T--){ 
        int n ; cin >> n ; 
        vector<int> rec(n+1); 
        fill( rec.begin() , rec.end(), 1) ; 
        for(int i =2; i<=n ; i++){
            if(rec[i]){ 
                for(int j=2 ; i*j<=n ; j++){
                    rec[i*j] = 0 ; } 
            }}
        vector<int> tmp ; 
        for(int a=2; a<=n ; a++){
            if(rec[a]) tmp.push_back(a) ; } 
        
        int l= n/2 , r = n/2 ;  
        while(true) {
            if( l+r ==n && rec[l] && rec[r]  ){
                cout <<  l  << " " <<  r  << jl ; 
                break ; }

            l -- ; 
            r ++ ; 
        }
        

    }
} 
