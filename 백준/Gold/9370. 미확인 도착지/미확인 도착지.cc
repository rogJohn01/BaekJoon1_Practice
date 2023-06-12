
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
#define INF std::numeric_limits<int>::max()


int T ; 



vector<int> dijkstra(int start, vector<vector<pair<int,int>>> &graph){
    int n = graph.size() ; 
    vector<int> distance(n, INF) ; 
    priority_queue<pair<int, int> , vector<pair<int , int >> , greater<pair<int , int >>> pq ; 

    distance[start] = 0 ; 
    pq.push({0, start}) ; 

    while(!pq.empty()){
        int dist = pq.top().first ; 
        int now = pq.top().second;
        pq.pop() ; 

        if(distance[now] < dist ) continue ; 

        for(auto &i : graph[now]){
            int cost = dist + i.second ; 

            if(cost < distance[i.first ]){
                distance[i.first] = cost ; 
                pq.push({cost , i.first}) ; 
            }
        }    
    }
    return distance ; 

}








int main() { 
    
    cin >> T ; 

    while(T--){
        int n, m , k ; 
        cin >> n >> m >> k ; 

        int s, g, h ; 
        cin >> s >> g >> h ; 

        vector<vector<pair<int ,int >>> graph(n+1) ; 

        for(int i=0 ; i < m ; i++){
            int a, b, c ; 
            cin >> a >> b >> c  ; 

            graph[a].push_back({b,c}) ; 
            graph[b].push_back({a,c}) ; 
        }

        vector<int> arr(k) ;
        for(int i=0 ; i < k ; i++){
            cin >> arr[i] ;
        }
        
        vector<int> first = dijkstra(s, graph) ; 
        vector<int> g_dijk = dijkstra(g, graph) ; 
        vector<int> h_dijk = dijkstra(h, graph) ; 

        vector<int> vec ; 
        for(auto ar:arr){
            if((first[g]+g_dijk[h]+h_dijk[ar] == first[ar] ) || (first[h]+ h_dijk[g] + g_dijk[ar] == first[ar])){
                g_dijk[ar] == first[ar] ; 
                vec.push_back(ar) ;
            }
        }

        sort(vec.begin() , vec.end()) ; 

        for(auto v:vec){
            cout << v << " " ;
        }
        cout << jl ; 

    }
    

}


