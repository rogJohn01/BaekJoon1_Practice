
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



int R ,C , K ; 
vector< vector<int>> mat ; 
vector<int> row ; 
vector<int> op ; 
int n ; 



vector<vector<int>> transpose(const vector<vector<int>>& mat){
        vector<vector<int>> nmat(mat[0].size() , vector<int>(mat.size())) ;
        for(int x =0 ; x < mat.size() ; ++x){
            for(int y=0 ; y < mat[0].size() ; ++y){
                nmat[y][x] = mat[x][y] ; 
            }
        }
        return nmat  ; 
}

void updown(vector<vector<int>>& mat){
    int u = 0 ; int d = mat.size() -1 ; 
    while(u < d){
        for(int c=0 ; c < mat[0].size() ; c++){
            swap( mat[u][c] , mat[d][c] );
        }
        u++; d -- ; 
    }
}

void leftright(vector<vector<int>>& mat){
    int l =0 ; int r = mat[0].size() -1 ; 
    while(l <r ){
        for(int i=0; i < mat.size() ; i++){
            swap( mat[i][l] , mat[i][r] ) ; 
        }
        l++ ; r -- ; 
    }
}

void clockRotate(vector<vector<int>>& mat){
    mat = transpose(mat);
    leftright(mat) ; 
}

void antiRotate(vector<vector<int>>& mat){
    mat = transpose(mat) ;
    updown(mat) ; 
}

void cycleleft(vector<vector<int>>& mat){
    int dr = mat.size() /2 ; 
    int dc = mat[0].size() /2 ; 
    for(int r = 0 ; r < dr ; r++){
        for(int c=0; c < dc ; c++){
            swap( mat[r][c] , mat[r][c+dc] ) ;
            swap( mat[r][c] , mat[r+dr][c] ) ;
            swap( mat[r+dr][c] , mat[r+dr][c+dc] ) ; 
        }
    }
    
}

void cycleRight(vector<vector<int>>& mat){
    int dr = mat.size() /2 ; 
    int dc = mat[0].size() /2 ; 
    for(int r =0 ; r < dr ; r++){
        for(int c=0 ; c < dc ; c++){
            swap(mat[r][c] , mat[r+dr][c]) ; 
            swap(mat[r][c] , mat[r][c+dc]) ; 
            swap(mat[r][c+dc] , mat[r+dr][c+dc]) ;
        }
    }
}



void input(){

    cin >> R >> C >> K ; 
    
    for(int r=0 ; r < R ; r++){

        row.clear() ; 

        for(int c=0 ; c< C ; c++){
            cin >> n ; 
            row.push_back(n) ; 
        }
        mat.push_back(row) ; 
    }
    
    for(int i=0; i< K ; i++){
        cin >> n ; 
        op.push_back(n) ; 
    }
}


void print(vector<vector<int>> mat ){
    for(int r=0 ; r < mat.size()  ; r++){
        for(int c=0 ; c<  mat[0].size() ; c++){
            cout  <<  mat[r][c]  << " "; 
        } cout << endl ; 
    }


}

void unitTest1(){

for(int i =0 ; i < 4 ; i++){

    updown(mat) ;  
    mat = transpose(mat);
    print(mat) ; 
    }
}

void unitTest2(){

 
    input() ; 

for(int i =0 ; i < 4 ; i++){
    antiRotate(mat) ;
    print(mat) ;
    
    
        }



}

void run(vector<vector<int>>& mat){
    for(auto act:op){


        switch(act){

            case 1:
                updown(mat) ;
                break ; 
            case 2: 
                leftright(mat) ;
                break ; 
            case 3: 
                clockRotate(mat) ;
                break ;
            case 4: 
                antiRotate(mat) ;
                break ; 
            case 5: 
                cycleleft(mat) ;
                break ; 
            case 6:
                cycleRight(mat) ;
                break ; 
            
        }
    }
}



int main() { 

   input() ; 
   run(mat) ; 
   print(mat) ;

}


