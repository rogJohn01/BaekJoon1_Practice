
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



int N , L ; 
//int mat[101][101] ; 

int visited_row[101][101] ; 
int visited_col[101][101] ; 
int ans = 0 ;
vector<vector<int>> mat ; 
vector<int>row ; 
int n ; 


void input(){
    cin >> N >> L ; 
    for(int r=0; r < N ; r++){
        for(int c=0; c < N ; c++){
            cin >> mat[r][c] ;
        }
    }
}

void input2(){
    cin >> N >> L ; 
    for(int r=0; r < N ; r++){
        row.clear() ; 
        for(int c=0 ; c < N ; c++){
            cin >> n ;
            row.push_back(n) ;
        }
        mat.push_back(row) ; 
    }
}



void print(vector<vector<int>> mat ){

    for(int r=0; r < N ; r++){
        for(int c=0; c < N ; c++){
            cout <<  mat[r][c] << " "; 
            }cout << endl ; 
    }
}
bool left_check(int x ,int y){

    int value = mat[x][y-1] ;
    if(visited_row[x][y-1]) return false ; 
    visited_row[x][y-1] = true ; 
    for(int i=1 ; i < L ; i++){
        if( y-1-i <0 ) return false ; // prevent out of index  
        if( (value != mat[x][y-1-i] ) || (visited_row[x][y-1-i] == true ) ) return false ; 
        visited_row[x][y-1-i] = true ; 

    }return true ; 
}

bool right_check(int x ,int y){
    
    int value = mat[x][y] ;
    visited_row[x][y] = true ; 
    for(int i=1 ; i < L ; i++){
        if(y+i >=N) return false ; 
        if(value != mat[x][y+i]) return false ; 
        visited_row[x][y+i] = true ; 
    } return true ; 

}

void scan_row(){

    for(int r=0; r< N ; r++){
        for(int c=1 ; c < N ; c++){
            if(mat[r][c-1] != mat[r][c] ){
                if( abs(mat[r][c-1] - mat[r][c]) >1 ) break ; 

                if( abs(mat[r][c-1] - mat[r][c]) ==1 ){
                    if( mat[r][c-1] > mat[r][c] ){
                        if(!right_check(r,c)) break ; 
                    }else {
                        if(!left_check(r,c)) break ; 
                    }
                } 
            }
            if(c==N-1){
                //cout << "row: " << r << endl ; 
                ans++ ; 
            }
        }
    }
}

 void transpose(vector<vector<int>>& mat){
    for(int r=0; r< N ; r++){
        for(int c= r; c< N ; c++){
            swap(mat[r][c] , mat[c][r]) ;
        }
    }
}

void updown(vector<vector<int>>& mat){
    int up=0 , down = N-1 ; 
    while(up < down ){
        for(int c=0; c < N ; c++){
            swap( mat[up][c] , mat[down][c] ) ; 
        } up ++ ; down -- ; 
    }
}

void rotate(vector<vector<int>>& mat){
    transpose(mat) ;
    updown(mat) ; 
}


int main() { 
    memset(visited_row , false , sizeof(visited_row)) ;


    input2() ; 
    scan_row() ; 
    memset(visited_row , false , sizeof(visited_row)) ;
    rotate(mat) ; 
    scan_row() ;



    //scan_row() ; 

    cout << ans << endl ; 



}


