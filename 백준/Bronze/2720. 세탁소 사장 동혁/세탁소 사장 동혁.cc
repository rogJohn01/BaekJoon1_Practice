
#include <iostream>
#include <vector> 
#include <string> 
#include <cstring> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <set> 
#define jl "\n"
using namespace std; 


int T , c ; 
vector<int> coins = {25, 10 , 5,1} ; 
int q ; 

int main() { 


    cin >> T ; 
    while(T--){
        cin >> c ; 

        unordered_map<int,int> booking ;
            
        int i=0 ; 
        while(c){
                            
           q  = c / coins[i] ;
           booking[coins[i]] = q ; 
           c %= coins[i] ; 
           i++ ; 
            }
        

    for(int c:coins){
        cout << booking[c] << " " ;
     }
    }
   

}


