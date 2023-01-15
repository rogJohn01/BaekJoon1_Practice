#include <climits>


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
int n ;
int add,sub,mul,divd ; 
vector<int> arr; 
int maxv = -2147483648 ;
int minv =  2147483647 ;

void backtrack(int ix,int tot , int add, int sub , int mul ,int divd){

    if(ix == n && tot > maxv) maxv = tot ; 
    if(ix == n && tot < minv) minv = tot ; 

    if(add >0) backtrack(ix+1 , tot+arr[ix] , add-1 , sub ,mul ,divd); 
    if(sub >0) backtrack(ix+1 , tot-arr[ix] , add , sub-1 , mul ,divd);
    if(mul >0) backtrack(ix+1 , tot*arr[ix] , add ,sub , mul-1 , divd) ; 
    if(divd>0) backtrack(ix+1 , tot/arr[ix] , add ,sub , mul , divd-1 ) ; 


}

int main() { 
 

    cin >> n ; 
    int t = n , v ; 
    while(t--){
        cin >> v ;
        arr.push_back(v); 
    }
    cin >> add ; cin >> sub ; cin >> mul ; cin >> divd ; 
    //cout << add << " " << sub << " " << mul << " " << divd ; 

    backtrack(1,arr[0] ,add,sub,mul,divd); 
    cout << maxv << jl ; 
    cout << minv << jl ; 



}