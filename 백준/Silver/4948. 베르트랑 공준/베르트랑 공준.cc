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

    while(true){ 

        int S  ; cin >> S ; 
        if(S ==0) break ; 
        int E = 2*S ; 
        vector<int> record(E+1); 
        fill(record.begin() , record.end() , 1) ; 

        for(int i=2 ; i <=E ; i++){
            if(record[i]){
                for(int j=2; i*j<=E ; j++){
                    record[i*j] =0 ; 
                }}}
        
//        if(S==1) S++ ; 
        int cnt = 0 ; 
        for(int a =S+1 ; a <=E ; a++){
            if(record[a]) cnt ++ ; }  
        
        cout << cnt << jl ;  

    }
} 
