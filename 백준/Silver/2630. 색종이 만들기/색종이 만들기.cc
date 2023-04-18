
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


int mat[128][128] ; 
int N ; 
int white = 0 , blue =0 ; 

bool  check_area(int x, int y, int z){
    int color = mat[x][y] ; 
    for(int i=x ; i < x+z ; i++){
        for(int j=y ; j < y+z ; j++ ){
            if(mat[i][j] != color) return false  ; 
        }
    }
    if(color ==1) blue++ ; 
    else white ++ ; 
    return true ; 
}



void divide(int x,int y , int z){
    if(! check_area(x,y,z) ){

        
        int dz = z/2 ; 
        divide(x,y, dz );
        divide(x+dz , y , dz ) ; 
        divide(x , y+dz , dz ) ; 
        divide(x+dz , y+dz , dz ) ; 

    }



}




int main() { 

    cin >> N ; 

    for(int r=0; r<N; r++){
        for(int c=0; c < N ; c++){
            cin >> mat[r][c] ; 
        }
    }

    divide(0,0,N) ; 
    cout << white << endl ; 
    cout << blue << endl ; 
}


