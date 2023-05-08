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


int R , C ; 
int mat[301][301] ;
int pfs[301][301] ;
int K ; 
int _x1,_x2 ,_y1, _y2 ; 

int main() { 

    cin >> R >> C ; 
    for(int r=0; r < R ; r++){
        for(int c=0 ; c < C ; c++){
            cin >> mat[r][c] ; 
        }
    }
    for(int r=0; r < R ; r++){
        for(int c=0  ; c < C ; c++){
            if(c==0){
                pfs[r][c] = mat[r][c] ; 
            }else {

             pfs[r][c]  += (pfs[r][c-1] + mat[r][c] ) ;
            }
        }
    } 
    cin >> K ; 
    while(K--){
        int ans = 0 ; 
        cin >> _x1 >> _y1 >> _x2 >> _y2 ; 
        _x1 -- ; _y1 -- ; _x2 -- ; _y2 -- ; 
        for(int r= _x1 ; r <= _x2 ; r++){
            ans += pfs[r][_y2] ;
            if(_y1 !=0) ans -= pfs[r][_y1-1] ;
        }
        cout << ans << endl ; 

    }

}  
