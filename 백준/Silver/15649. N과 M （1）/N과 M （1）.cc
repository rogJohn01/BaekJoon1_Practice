
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 
#define jump "\n"

vector<int> ans ; 
vector<int> nums;
int N ,M ;

vector<int> backtrack(int x){
    
    if (x == M ){
        for(int i=0; i< ans.size(); i++){
            cout << ans[i] << " " ;  } 
        cout << jump ;
        return ans ; } 
            
    for(auto n:nums){ 

        if (find(ans.begin(), ans.end(), n) != ans.end()  ){
            continue ;} 
        else { 
            ans.push_back(n);
            backtrack(x+1);
            ans.pop_back() ; }
    }
    return ans; 
} 


int main() { 
    cin.tie(NULL);
	ios::sync_with_stdio(false);
    cin >> N >> M ; 
    
    for(int i=1; i<=N ; i++){ 
        nums.push_back(i) ; } 

    backtrack(0); 

} 
