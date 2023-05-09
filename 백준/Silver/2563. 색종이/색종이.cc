
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

int mat[100][100] ;


int N , x , y ; 
int R = 100 , C =100 ; 


void coloring(int x ,int y){
    
    int start = 100-y-10 ;
    for(int r = start ; r < start+10 ; r++ ){
        for(int c= x ; c < x+10 ; c++){
            mat[r][c] =1  ; 
        }
    }
    

}

int main() { 
    
    memset(mat, 0, sizeof(mat)) ;

    cin >> N ; 
    while(N--){
        cin >> x >> y ; 
        coloring(x,y) ;

    }
    
    int ans=0;
    for(int r=0; r<100 ; r++){
        for(int c=0; c< 100 ; c++){
            if(mat[r][c] == 1) ans++ ; 
        }
    }
    cout << ans ;


}


