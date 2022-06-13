
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

int R ,C ,n ;

void vout2(vector<vector<int>> vec) {
    int R = vec.size() ; 
    int C = vec[0].size() ; 
    for(int r =0 ; r < R ; r++){
        for( int c =0 ; c < C ; c++) { 
            cout << vec[r][c] << " " ; }
        cout << endl  ; }
}

int dp(vector<vector<int>> mat ){
    for(int r=1; r < R ; r++){
        mat[r][0] += mat[r-1][0] ; } 
    for(int c=1 ; c < C ; c++) { 
        mat[0][c] += mat[0][c-1] ; } 
    for(int r=1; r< R ; r++) { 
        for(int c=1; c<C ; c++) { 
            mat[r][c] += max( { mat[r-1][c] , mat[r-1][c-1] , mat[r][c-1]} ) ;
        }}
    return  mat[R-1][C-1] ; 
} 


int main() { 
    cin >> R >> C ; 
    vector<vector<int>> mat(R , vector<int>(C)) ; 
    for(int r =0 ; r < R ; r++){
        for( int c =0 ; c < C ; c++) { 
            cin >> n; 
            mat[r][c] = n ; }} 

    cout << dp(mat) ; 

} 
