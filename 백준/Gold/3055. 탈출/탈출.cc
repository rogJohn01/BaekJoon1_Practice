
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

int R ,C ; 
char mat[51][51] ;
int visited[51][51] ;

int dx[4] = {1,-1,0,0} ;
int dy[4] = {0,0,1,-1} ; 
queue<vector<int>> waters ;
queue<vector<int>> hedgehog ; 

void bfs(){



    while(!hedgehog.empty()){
        
        int sz = waters.size() ; 
        while(sz--){
            int x = waters.front()[0] ;
            int y = waters.front()[1] ;
            waters.pop() ; 
            
            //cout << "waters: "+ to_string(x)+","+to_string(y) << endl ;

            for(int i=0;i<4 ; i++){
                int nx = x+ dx[i] ;
                int ny = y+ dy[i] ;

                if(0<= nx && nx < R && 0<= ny && ny < C ){
                    if(mat[nx][ny] =='.'){
                        mat[nx][ny] = '*' ; 
                        waters.push({nx,ny}) ; 
                    }
                }
            }


        }
        int szz = hedgehog.size() ; 
        while(szz--){

            int x = hedgehog.front()[0] ;
            int y = hedgehog.front()[1] ;
            int t  = hedgehog.front()[2] ;
            hedgehog.pop() ; 
            
            //cout << to_string(x)+","+to_string(y)+","+to_string(t) << endl ;


            if(mat[x][y] =='D'){
                cout << t << endl ; 
                return ; 
            }


             for(int i=0;i<4 ; i++){
                int nx = x+ dx[i] ;
                int ny = y+ dy[i] ;

                if(0<= nx && nx < R && 0<= ny && ny < C ){
                    if( (mat[nx][ny] =='.' ) && !visited[nx][ny]){
                                
                        visited[nx][ny] = 1 ;
                        hedgehog.push({nx,ny, t+1 }) ; 
                        //mat[nx][ny] = 'S' ;
                    } else if( mat[nx][ny] =='D' ){
                        cout << t +1 << endl ; 
                        return ; 
                    }
                } 
        }





    }
    

    } cout << "KAKTUS" ; 

}


int main() { 

    cin >> R >> C ; 
    for(int r=0; r < R ; r++){
        for(int c=0; c< C ; c++){
            cin >> mat[r][c] ; 
            if(mat[r][c] == '*'){
                waters.push({r,c}) ; 
            } else if( mat[r][c] =='S' ){
                hedgehog.push({r,c,0}) ; 
            }
        }
    }
    memset(visited, 0 , sizeof(visited)) ; 
    
    bfs() ; 

}


