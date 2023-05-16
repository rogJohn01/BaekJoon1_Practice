
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



int N , M ; 
int a, b ; 

int parent[500001]  ; 


int find(int x){
    if(parent[x] !=x){
        parent[x] = find(parent[x]) ;
    }
    return parent[x] ; 
}

void union_find(int x, int y){

    x = find(x) ;
    y = find(y) ;

    if(x < y){
        parent[y] = x ;
    }else{
        parent[x] = y ; 
    }
}



int main() { 
    
    

    cin >> N >> M ; 
    
    for(int i=0; i < N ; i++){
        parent[i] = i ; 
    }


    bool found = false ; 
    for(int m = 0 ; m < M ; m++){
        cin >> a >> b ; 
        if( find(a) == find(b) ){
            cout << m+1 << endl ; 
            found = true ; 
            break ; 
        }else{
            union_find(a,b) ; 
        }
    }
    if( !found ) cout << 0 << endl ; 
    


}


