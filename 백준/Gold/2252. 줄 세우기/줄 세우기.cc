
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
int a ,b ; 

int indegree[32001] ;
queue<int> q ; 
vector<int>  relat[32001] ;


int main() { 
    
    cin >> N >> M ; 
    memset(indegree , 0 , sizeof(indegree)) ; 
    memset(relat , 0 , sizeof(relat)) ; 
    
    for(int i=0; i < M ; i++){
        cin >> a >> b ; 
        relat[a].push_back(b) ; 
        indegree[b] ++ ; 
    }

    for(int i=1 ; i <= N ; i++){
        if( indegree[i] ==0 ) q.push(i) ;
    }

    while(!q.empty()){
        int node = q.front() ; q.pop() ;
        cout << node << " " ; 
        for(int i=0 ; i < relat[node].size() ; i++){
            indegree[relat[node][i] ] --;
            if(indegree[relat[node][i]]==0){
                q.push(relat[node][i]) ; 
            }
        }


    }



}


