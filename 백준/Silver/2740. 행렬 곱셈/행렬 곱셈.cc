#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <set> 
#define jl "\n"
using namespace std; 

int main() { 
    int R , K , C , n ; 
    cin >> R ; cin >> K ; 
    int vt1[R][K] ; 
    for(int r =0; r < R ; r++){
        for(int c =0; c < K ; c++){
            cin >> n ; 
            vt1[r][c] = n ; } }
    
    cin >> K ; cin >> C ; 
    int vt2[K][C] ; 
    for(int r =0; r < K ; r++)
        for(int c =0; c < C ; c++){
            cin >> n ; 
            vt2[r][c] = n ; } 

    int mat[R][C] ;  
    for(int r =0 ; r < R ; r++){
        for(int c = 0; c < C ; c++){
            int tmp = 0 ; 
            for(int k =0 ; k < K ; k++){ 
                tmp += vt1[r][k]*vt2[k][c] ; }
            mat[r][c]  = tmp  ; }
    }
    for(int r =0 ; r < R ; r++){
        for(int c = 0; c < C ; c++){
            cout << mat[r][c] << " " ; }
        cout << jl ; } 

} 
