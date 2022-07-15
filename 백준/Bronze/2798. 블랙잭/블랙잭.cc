#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <set> 
#define jl "\n"
using namespace std; 

int main() { 

    int N ,K,n ; cin >> N >> K ; 
    vector<int> nums ; 
    while(N--){ 
        cin >> n; nums.push_back(n) ; } 
    
    N = nums.size() ; 
    int ans = 0 , sumv ; 
    for(int a=0; a< N ; a++)
        for(int b=a+1; b<N ; b++)
            for(int  c=b+1; c<N ; c++) {
                sumv = nums[a]+nums[b]+nums[c] ;
                if(sumv <= K && sumv > ans ) ans = sumv ;  
            }
    cout << ans ;
} 
