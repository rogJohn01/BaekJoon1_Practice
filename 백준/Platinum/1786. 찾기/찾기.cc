
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

string text ; 
string pat ; 
int j  ; 
int ans =0 ;  
vector<int> place ; 


void preprocess(vector<int> &ffx ){
    
    
    j =0 ; 
    for(int i=1 ; i < pat.length() ; i++){
        
        // j >0 : at least there is one char matching 
        while(j >0 && pat[i] != pat[j]){
            j = ffx[j-1] ; 
        }
        if(pat[i] ==pat[j]){
            ffx[i] = ++j ; 
        }
    }
}

void kmp(){
    
    vector<int> ffx(pat.length() , 0 ) ; 

    preprocess(ffx) ; 


    j =0 ; 
    for(int i=0; i < text.length() ; i++){
        
        while(j > 0 && text[i] != pat[j]){
            j = ffx[j-1] ; 
        }
        if(text[i] == pat[j]){
            if(j== pat.length() -1){
                ans ++ ; 
                place.push_back(i-pat.size() +2  ) ; 
                j = ffx[j] ;
            }else {
                j++ ; 
            }
        }
    }
}



int main() { 

    getline(cin ,text) ;
    getline(cin , pat) ;

    kmp() ; 
    cout << ans << "\n"; 
    for(auto p:place) cout << p << " " ; 



}


