
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

long long pref[12]  ;

int main() { 

    cin >> N ; 
    memset(pref, 0, sizeof(pref)) ;  

    pref[1] = 9 ;
    long long x = pref[1]; 
    for(int i=2 ; i <=9 ; i++){
        x = x*10 ; 
        pref[i] = x ; 
    } 
    

    int Nlen = to_string(N).length() ; 
    long long ans = 0 ; 
    for(int i=1 ; i <Nlen ; i++ ){
        ans +=pref[i]*i ;
    }
    

    if(N != pow(10,Nlen-1)){
        ans += (N- pow(10,Nlen-1)+1)*(Nlen) ;
    }else{
        ans +=(Nlen) ;
    }

    cout << ans << endl ; 

}

