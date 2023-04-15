
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


int Nweight ;
int Nmarvel ; 
int weights[31] ; 
int marvels[8] ;
bool dp[31][15001] ;

void dfs(int ix , int w){

    if(ix > Nweight || dp[ix][w]) return ; 
    dp[ix][w] = true ; 
    dfs(ix+1 , w+weights[ix]) ;
    dfs(ix+1 , abs(w-weights[ix])) ; 
    dfs(ix+1 , w ) ; 


}




int main() { 
    cin >> Nweight ;
    for(int i=0; i< Nweight ; i++){
        cin >> weights[i] ;
    }
    cin >> Nmarvel ; 
    dfs(0,0) ; 

    int x ; 
    for(int i=0; i < Nmarvel ; i++){
        
        cin >> x;

        if( x >15000)cout << "N " ;
        else if(dp[Nweight][x]) cout << "Y " ; 
        else cout << "N " ; 
    }




}


