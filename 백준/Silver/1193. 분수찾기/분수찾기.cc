
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

int x ; 

int ix ; 
int prefxsm ; 
int denom , nom ; 


int get_index(int  &x ){

    ix =1 ; 
    prefxsm = 1 ; 
    while( x > prefxsm ){
        ix ++ ; 
        prefxsm += ix ; 
    }
    prefxsm -= ix ; 
    return x - prefxsm ; 

}

string compute_ans(int  ix , int reach){
    
    if(ix % 2 ==0){ // even 
        int tot = ix +1 ; 
        denom =  ix - reach +1   ; 
        nom = tot -denom  ; 
        return  to_string(nom)+"/"+to_string(denom) ;
    }else {
        int tot = ix +1 ; 
        nom = ix - reach + 1   ; 
        denom =  tot - nom    ; 
        return  to_string(nom)+"/"+to_string(denom) ; 
    }

}


void unit_test(){
    for(int x=1 ; x < 30 ; x++){

    int reach = get_index(x) ; 
    //cout << "i: " << x << endl ; 
    cout << compute_ans(ix , reach) << endl    ; 
    }
}


int main() { 

    cin >> x ; 
    int reach = get_index(x) ; 

   // cout << "ix: " << ix << endl; 
   // cout << "prefxsm: " << prefxsm << endl; 
    //cout << "reach: " << reach << endl ; 
    cout << compute_ans(ix , reach)  ; 

}


