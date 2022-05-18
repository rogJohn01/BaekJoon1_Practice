#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

string s,t ; 
bool res = 0 ; 

int main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0) ; 
    
    cin >>s;
    cin >>t; 

    while (true) { 
        
        if (s.size() == t.size()) {
            if (s==t) 
                res =1 ;
            break ; }  
    
        if (t[t.size() -1] =='A') 
            t.pop_back(); 
        
        else {
            t.pop_back() ; 
            reverse(t.begin() , t.end() ) ;} 
 
    }
    cout << res << endl; 
}






