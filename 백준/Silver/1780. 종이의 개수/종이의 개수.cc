
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
int mat[2188][2188]; 

int mone =0 , zero = 0 , one =0 ; 


bool check_area(int x ,int y , int z ){
    int type = mat[x][y];
    for(int r=x ; r < x+z ; r++){
        for(int c=y ; c < y+z ; c++){
            if(mat[r][c] != type){
                return false; 
            }
        }
    }
    //cout << type << endl ; 
    switch(type){
        case -1: 
            mone ++ ; 
            break ; 
        case 0: 
            zero ++ ;
            break ; 
        case 1: 
            one ++ ; 
            break ;

    }
    return true ; 
}





void divide(int x, int y , int z ){
    if(!check_area( x , y ,  z )){

        

        int dz = z/3 ; 
        divide(x,y , dz) ;
        divide(x+dz, y ,dz ) ;
        divide(x+2*dz ,y ,dz) ;
        divide(x , y+dz , dz) ;
        divide(x+dz ,y+dz , dz) ;
        divide(x+2*dz, y+dz , dz ) ; 
        divide(x , y+2*dz , dz) ;
        divide(x+dz , y+2*dz , dz) ;
        divide(x+2*dz , y+2*dz , dz) ;
    }

}




int main() { 

    cin >> N ; 
    for(int i=0; i< N ; i++){
        for(int j=0 ; j< N ;j++){
            cin >> mat[i][j] ;
        }
    }
    divide(0,0,N) ;

    cout << mone << endl ; 
    cout << zero << endl; 
    cout << one << endl ; 


}


