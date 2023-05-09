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


int N , K ; 
vector<int> divisors ; 
vector<int> divisors2 ;

void get_divisors(){

    int sr = (int)sqrt(N) +1 ;
    for(int i =1 ; i <=sr ;i++){
        if( N % i ==0){
            divisors.push_back(i); 
        }
    }
    for(auto dv: divisors){
        divisors2.push_back(N / dv) ;         
    }
    for(auto dv2:divisors2){
        if( count(divisors.begin() , divisors.end() , dv2) ==0 ){
            divisors.push_back(dv2) ; 
        }
    }
}


int main() { 
    
    cin >> N >> K ; 
    get_divisors() ; 
    sort(divisors.begin() , divisors.end() ) ; 

    for(auto dv :divisors){
        K--;
        if(!K){
             cout << dv << endl ; 
             break ; 
        }
    }
    if(K) cout << 0 ; 

    //for(auto d:divisors) cout << d << " " ;  
}


