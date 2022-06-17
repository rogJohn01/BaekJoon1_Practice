#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#define jl "\n"
using namespace std; 

int mat[1025][1025] ;

int main() { 
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0); 
    
    int N , M , n ; 
    cin >> N >> M ; 

    for(int r =0; r < N ; r++){ 
        for(int c =0 ; c < N ; c++) { 
            cin >> n ; 
            mat[r+1][c+1] =  mat[r][c+1] + mat[r+1][c] - mat[r][c] + n ; } 
    } ; 
    
    int x1 , x2 , y1 , y2 ; 
    while (M--){ 
        cin >> x1 >> y1 >> x2 >> y2 ; 
        cout << mat[x2][y2] - mat[x1-1][y2] - mat[x2][y1-1] + mat[x1-1][y1-1] << jl ; }


} 
