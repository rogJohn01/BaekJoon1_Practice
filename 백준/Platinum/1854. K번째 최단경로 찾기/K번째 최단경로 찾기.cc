
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
#define ll long long 
#define vv vector<vector<int>>  
using namespace std; 

#define x first 
#define y second 

typedef pair<int, int > p ; 

vector<p> g[1010] ;
priority_queue<int> heap[1010] ; 
int n , m , k ; 


void kth_dijkstra(){
    priority_queue<p , vector<p> , greater<p> >  pq ;
    pq.push({0,1}) ; 
    heap[1].push(0) ; 

    while(pq.size()){
        int cur = pq.top().y ; 
        int ccost = pq.top().x ; 
        pq.pop() ; 

        for(auto i: g[cur]){
            int next = i.x ; 
            int ncost = i.y + ccost ; 
            if(heap[next].size() < k){
                heap[next].push(ncost) ; 
                pq.push({ncost , next}) ;
            }else if(heap[next].top() > ncost){
                heap[next].pop() ; 
                heap[next].push(ncost) ;
                pq.push({ncost , next}) ; 

            }
        }
    }
}






int main() { 
    cin >> n >> m >> k ; 
    for(int i =0 ; i < m ; i++){
        int a, b,c ; 
        cin >> a >> b >> c ; 
        g[a].push_back({b,c}) ; 
    }
    kth_dijkstra() ;

    for(int i =1 ; i <= n ; i++){
        if(heap[i].size() !=k) cout << "-1\n" ;
        else cout << heap[i].top() << "\n" ; 
    }


}


