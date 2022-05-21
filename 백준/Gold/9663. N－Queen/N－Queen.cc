#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

int row[14] ; 
int ans = 0; 
int N; 

bool possible(int x){

    for(int j =0 ; j<x ; j++){
        if( row[x] ==row[j] ||  abs(row[x] - row[j]) == abs(x-j) )
            return false;  } 
    return true;  } 

void  nQueen(int x){
    
    if (x==N){
        ans ++; }  

    else { 
        for(int i=0; i< N ; i++){
            row[x] = i ;
            if ( possible(x)){
                nQueen(x+1); } }
    }
}

int main() { 
    cin >> N; 
    
    nQueen(0); 
    cout << ans; 


} 

