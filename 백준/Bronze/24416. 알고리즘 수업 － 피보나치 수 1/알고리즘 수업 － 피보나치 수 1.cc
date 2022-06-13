#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

int cnt1 =0 ; 
int cnt2 =0 ; 

int fibo(int x){ 
    if(x==1 or x==2) {
        cnt1 +=1 ; 
        return 1; }
    
    return fibo(x-1)+fibo(x-2); 
}

int dp[41] ; 
int dpfibo(int x){ 
    dp[1] = 1;
    dp[2] = 1;
    for(int i=3 ; i <=x ;  i++){
        dp[i] = dp[i-1]+dp[i-2] ;  
        cnt2 +=1 ; }  
    return dp[x];  
}

int main() { 
    int n; cin>> n;

    fibo(n) ; 
    dpfibo(n) ; 
    cout << cnt1 << " " << cnt2 ;  


} 
