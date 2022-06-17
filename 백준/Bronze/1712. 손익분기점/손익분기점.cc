#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#define jl "\n"
using namespace std; 

int main() { 

    int a ,b ,c ,n ; 
    cin >> a >> b >>  c ; 
    int profit = c-b ; 
    if(profit <=0) { 
        cout << -1 ; } 
    else { 
        cout << a/profit +1 ; }  


} 
