
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

int board[15] ; 
int N ; 
int ans ; 

bool check_pass(int x){

    for(int j=0 ; j < x ; j++){

        if( board[x] == board[j] || ( (x-j) == abs(board[x]- board[j]) ) ){
            return false ;
        }
    } return true ; 
}




void Nqueen(int x){
    
    if( x == N ){
        ans++ ;
        return ; 
    }
    
    for(int i=0; i < N ; i++){
        board[x] = i ; 
        if(check_pass(x)){
            Nqueen(x+1) ; 
        }
    }

}




int main() { 

    cin >> N ; 

    
    Nqueen(0) ;
    cout << ans ; 


}


