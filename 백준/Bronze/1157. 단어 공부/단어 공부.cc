
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

    string s; cin >> s; 
    vector<int> alp(26); 
    
    for(auto e:s){ 
        char ee = toupper(e) ; 
        alp[ee-'A'] ++ ; 
    }
    int maxv=  0 , cnt = 0 ,midx=0;  
    for(int i=0; i <26 ; i++){ 
        if( alp[i] > maxv){
            maxv = alp[i] ;
            midx = i ; 
            cnt = 1 ;  } 
        else if( alp[i] ==maxv) cnt ++ ; 
    }
    if (cnt >1) cout << "?" ; 
    else cout << (char)(midx+65) ;   



}