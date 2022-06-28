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
    int N ,L ; 
    cin >> N >> L ; 
    int D[N] , R[N] , G[N] ; 
    int i = 0 ; 
    int asize = N ; 
    while(N--){
        cin >> D[i] >> R[i] >> G[i] ;  
        i ++ ; }
    
    int time = 0 , prv = 0 ; 
    for(int i=0 ; i < asize  ; i++){ 
       int d=D[i] , r = R[i] , g= G[i] ; 
       time += (d-prv) ; 
       prv = d ;  
       int tt = time % (r+g) ; 
       if( tt < r) time += (r-tt) ; } 
    
    cout << time +(L-prv) ; 




} 
