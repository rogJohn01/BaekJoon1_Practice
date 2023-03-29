
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
int mat[10][10] ; 
int ans ; 
int LR[100][2] ;
int RL[100][2] ; 



void backtrack(int row , int col , int cnt , int color){
    
    if(col >=N){
        row ++ ; 
        if(col % 2 ==0){
            col = 1 ;
        } else {
            col = 0 ; 
        }
    }
    
    if(row >=N){
        ans = max(ans , cnt) ; 
        return ; 
    }


    if(  (mat[row][col] ==1) &&  !LR[row-col+N][color] && !RL[row+col][color] ){
        LR[row-col+N][color] = RL[row+col][color] =1  ; 
        backtrack(row , col+2 , cnt+1 , color) ;
        LR[row-col+N][color] = RL[row+col][color] = 0   ; 
    }
    backtrack(row,col+2, cnt , color) ; 


}




int main() { 


    cin >> N ; 
    for(int r=0; r < N ; r++){
        for(int c=0; c < N ; c++){
            cin >>  mat[r][c] ; 
        }
    }

    ans = 0 ;
    backtrack(0,0,0,0) ; 
    int black = ans ; 
    ans = 0 ;
    backtrack(0,1,0,1) ; 
    int white = ans ; 
    cout << black + white << endl ; 
    


}


