
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

int N ; 


int cal(int x){
    if( x % 2 ==0 ){
        return x/2 ; 
    } else {
        return x/2 +1 ; 
    }
}

int main() { 

    cin >> N ; 

    unordered_map<int,int> mp ; 
    while(N >0){
        mp[N % 10] ++ ;
        N  /= 10 ;
    }

    int maxv =0 ; 
    for(auto &p:mp){
//        cout << p.first << ": " << p.second << endl ; 
        if( (p.first !=9 )&& ( p.first !=6 )){
            maxv = max(maxv , p.second ) ;
        } 
    }
    int ninesix  = mp[6] + mp[9]   ; 
    int compare = cal(ninesix) ;
    
    (maxv > compare) ? cout << maxv : cout << compare ; 


}


