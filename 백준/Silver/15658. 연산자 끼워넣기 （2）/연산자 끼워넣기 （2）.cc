
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <queue> 
#include <stack> 
#include <set> 
#define jl "\n"
using namespace std; 

int N , n  ; 
vector<int> arr ; 
int maxv = -2147483648;
int minv =2147483647; 

void backtrack(int ix , int tot , int add ,int sub ,int mul , int divv){
   

    if(ix==N){

        if(tot > maxv) maxv = tot ; 
        if(tot < minv) minv = tot ; 
        
        return ; 
    }   
    if(add >0) backtrack(ix+1 , tot+arr[ix] , add-1 , sub , mul , divv); 
    if(sub>0) backtrack(ix+1 , tot-arr[ix] , add , sub-1 , mul ,divv); 
    if(mul>0) backtrack(ix+1, tot*arr[ix] , add , sub , mul-1 , divv) ; 
    if(divv>0) backtrack(ix+1, tot/arr[ix] , add , sub , mul , divv -1) ; 

}



int main() { 
   

    cin >> N ; 
    int t = N ; 
    while(t--){
        cin >> n ; 
        arr.push_back(n) ; 
    }
    int add , sub , mul , divv ; 
    cin >> add >> sub >> mul >> divv ; 
//    cout << add << " " << sub << " " << mul << " " << divv ; 
    backtrack(1,arr[0],add,sub,mul,divv) ; 
    cout << maxv << jl ; 
    cout << minv << jl ; 

}