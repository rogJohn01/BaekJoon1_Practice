
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
vector<int> arr ; 
vector<int> box ; 
int ans = 0 ; 

int compute(vector<int> vec){
    int res = 0 ; 
    for(int i =1 ; i < vec.size() ; i++){
        res += abs(vec[i-1] - vec[i]) ;
    } 
    return res ; 
}


void dfs(int start){

    if(start==N){
        //for(int b:arr) cout << b << " " ;
        //cout << jl ; 
        ans = max(ans , compute(arr)) ;         
        return ; 
    }

    for( int i= start ; i < N ; i++ ){
        swap(arr[i], arr[start]) ;
        dfs(start+1) ;
        swap(arr[i], arr[start]) ;
    }

}



int main() { 

    cin >> N ;  
    int n ; 
    for(int i=0; i < N ; i++){
        cin >> n ; 
        arr.push_back(n) ; 
    }

    dfs(0) ; 
    
    cout << ans ; 

}


