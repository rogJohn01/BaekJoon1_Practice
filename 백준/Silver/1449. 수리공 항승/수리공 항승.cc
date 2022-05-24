#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 



int main() { 

    int N , L ; 
    cin >> N >> L ; 
    
    int n ; 
    vector<int> nums ;
    for(int  i =0; i < N ; i++) { 
        cin >> n;   
        nums.push_back(n ) ; } 

    sort(nums.begin() , nums.end() ) ;

    int cnt=1; 
    int pre = nums[0] +L - 0.5 ; 

    for( int i = 1 ; i < nums.size() ; i++){ 
        if ( pre < nums[i] ) { 
            cnt ++ ; 
            pre = nums[i] + L - 0.5 ; } } 

    cout << cnt ; 




} 
