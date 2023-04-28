
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



vector<int> row(4,0) ;
vector<int> col(4,0) ;

int R , C , x , y , K ; 
int mat[21][21] ; 
vector<int> dirBox ; 
int n ; 

int dx[] = {0,0,0,-1,1} ;
int dy[] = {0,1,-1,0,0} ;

int nx ,ny ; 




void input(){

    cin >> R >> C >> x >> y >> K ; 

    for(int r=0; r< R; r++){
        for(int c=0; c <C ; c++){
            cin >> mat[r][c] ; 
        }
    }
    int t= K ;
    while(t--){
        cin >> n ; 
        dirBox.push_back(n) ; 
    }
}



void rotate_left(vector<int> &arr){
    for(int i=1 ; i < arr.size() ; i++){
        swap(arr[i-1] , arr[i] ) ;  
    }
//    for(auto a:arr) cout << a << " " ; 
  //  cout << endl; 
}

void rotate_right(vector<int> &arr){
    for(int i=arr.size()-1 ; i > 0 ; i--){
        swap(arr[i-1] , arr[i] ) ;  
    }
    //for(auto a:arr) cout << a << " " ; 
    //cout << endl; 
}

void unitTest_rotate(){

    vector<int> arr = {1,2,3,4} ; 
    for(int i=0 ; i < 4 ; i++){
        rotate_left(arr) ; 
    }
    cout << " switch " << endl ; 
    for(int i=0 ; i < 4 ; i++){
        rotate_right (arr) ; 
        }
}


void update_col(vector<int> row , vector<int> &col ){
    col[1] = row[1] ;
    col[3] = row[3] ; 
}

void update_row(vector<int> &row , vector<int> col ){
    row[1] = col[1] ;
    row[3] = col[3] ;
}


void unitTest2(){

    vector<int> row = {4,1,3,6} ;
    vector<int> col = {2,1,5,6} ;
    rotate_left(row) ; 
    update_col(row ,col) ;
    cout << "row: " ; 
    for(auto r:row) cout << r << " " ; 
    cout << endl << "cols: "; 
    for(auto c:col) cout << c << " " ; 
}





void dice_roll(int dir , vector<int> &row , vector<int> &col){

    if(dir ==1){
        rotate_right(row) ;
        update_col(row,col) ;          
    }else if(dir==2){
        rotate_left(row) ; 
        update_col(row, col) ; 
    }else if(dir==3){
        rotate_left(col) ; 
        update_row(row,col) ; 
    }else if(dir==4){
        rotate_right(col) ; 
        update_row(row,col) ; 
    }
}


void unitTest3(){

    vector<int> row = {4,1,3,6} ;
    vector<int> col = {2,1,5,6} ;
    
    for(int i=1 ; i <=4 ; i++){
        cout << "i: "+to_string(i) << endl ; 
        dice_roll(i , row ,col ) ; 
        cout << "row: " ; 
        for(auto r:row) cout << r << " " ; 
        cout << endl << "cols: "; 
        for(auto c:col) cout << c << " " ; 
    }

}

void unitTest4(){

    input() ;  
    for(int r=0; r< R; r++){
        for(int c=0; c <C ; c++){
            cout <<  mat[r][c] << " " ; 
            } cout << endl ; 
        }
    for(auto d:dirBox) cout << d << " " ; 



}

void marking(vector<int> &row , vector<int> &col){
        
    if(mat[nx][ny] == 0){
        mat[nx][ny] = row[3] ;
    }else {
        row[3] = mat[nx][ny] ;
        col[3] = mat[nx][ny] ; 
        mat[nx][ny] = 0 ; 
    }
}

void unitTest5(int d ){
    
                                     
        cout << "d: "+to_string(d) << endl ; 
        cout << "row: " ; 
        for(auto r:row) cout << r << " " ; 
        cout << endl << "cols: "; 
        for(auto c:col) cout << c << " " ; 
        cout << endl ; 


}



int main() { 


    input() ; 

    for(auto d:dirBox){
        nx = x+dx[d] ;
        ny = y+dy[d]; 
    

        if(0<=nx && nx < R && 0<= ny && ny < C){
            dice_roll(d , row ,col) ; 
            marking(row , col ) ; 
            cout << row[1] << endl; 

            x = nx ; 
            y = ny ; 
        }

    }


}


