
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



int R , C , K  ; 
int mat[1000][1000] ;
int visited[1000][1000][10] ; 
int x , y , d , k ; 

struct box {
    int x ; 
    int y ; 
    int d ; 
    int k ; 
} ; 

int dx[] = {1,-1,0,0} ;
int dy[] = {0, 0, 1, -1 } ; 



int bfs(int r  , int c  ){
    
    queue<box> q ; 
    box bb ;
    bb.x = r ; bb.y = c  ;  bb.d = 0 ; bb.k = K ;  
    q.push(bb)  ; 
    while(!q.empty()){
        
        x = q.front().x ; 
        y = q.front().y ; 
        d = q.front().d ; 
        k = q.front().k ; 
        q.pop() ; 

        if( x == R-1 && y == C-1  ){
            return d+1 ; 
        }




        for(int i=0 ; i < 4 ; i++){
            int nx = x+ dx[i] ; 
            int ny = y+ dy[i] ; 

            if(0<=nx && nx < R && 0 <= ny && ny < C ){

                if(mat[nx][ny] ==0 && visited[nx][ny][k] ==0 ){
                    visited[nx][ny][k] = 1 ; 
                    box bb ; 
                    bb.x = nx ; bb.y = ny ; bb.d = d+1 ;  bb.k = k ; 
                    q.push(bb ) ; 
                } else if( mat[nx][ny] ==1 && k > 0 && visited[nx][ny][k] == 0  ) {
                    visited[nx][ny][k] = 1 ; 
                    box bb ; 
                    bb.x = nx ; bb.y = ny ; bb.d = d+1 ;   bb.k = k-1 ; 
                    q.push(bb) ; 
                }


            }
        }
    }
    return -1 ;  
}





int main() { 
    
    memset(visited , 0 , sizeof(visited )) ; 
    
    cin >> R >> C >> K ; 
    for(int r= 0 ; r < R ; r++){
        string s ; 
        cin >> s ; 
        for(int c=0; c < C ; c++){
          //  cin >> mat[r][c] ; 
            mat[r][c] = s[c]-'0' ; 
        }
    }
    //cout << R << C  << K ; 


      cout << bfs(0,0) ; 

}


