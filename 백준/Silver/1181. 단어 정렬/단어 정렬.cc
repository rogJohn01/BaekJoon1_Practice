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

bool cmp(string s1 , string s2){
    if( s1.size() == s2.size())
        return s1 < s2 ;
    else
        return s1.size() < s2.size() ; 
}



int main() { 

    int N ; cin >> N ;  
    vector<string> box ;  
    string s ; 
    while(N--){
        cin >> s ; 
        box.push_back(s) ; } 

    sort(box.begin() , box.end() , cmp) ; 
    for( int i = 0  ; i < box.size() ; i++){
        if( i>=1 &&   box[i] == box[i-1] ) continue ; 

        cout << box[i] << jl ;  
    }
    

} 



