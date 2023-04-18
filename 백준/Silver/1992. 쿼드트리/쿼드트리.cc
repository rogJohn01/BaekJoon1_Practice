
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
int mat[64][64] ; 
string sl ; 
vector<string> ans ; 


bool check_area(int x, int y , int z){
    int color = mat[x][y] ; 
    for(int r= x ; r < x+z ; r++){
        for(int c= y; c < y+z ; c++){
            if(mat[r][c] != color ) return false ; 
        }
    } 
    //if(color ==1)ans.push_back("1") ; 

    ans.push_back(to_string(mat[x][y])) ;
    //else ans.push_back("0") ; 
    return true ; 
}



void quadTree(int x ,int y , int z){

    if(!check_area(x,y,z)){

        
        ans.push_back("(") ;
        
        int dz = z/2 ; 
        quadTree(x,y, dz) ;
        quadTree(x,y+dz,dz) ;
        quadTree(x+dz , y , dz) ;
        quadTree(x+dz,y+dz , dz) ; 

        ans.push_back(")") ; 
    }

}






int main() { 
        
    cin >> N ; 
    for(int r=0; r < N ; r++){
        cin >> sl ; 
        for(int c=0 ; c < N ; c++){
            mat[r][c] = sl[c] -'0'  ; 
        }
    }

    quadTree(0,0,N) ;

    string op ="";
    for(auto a:ans){
        op += a; 
    }
    cout << op ; 



}

