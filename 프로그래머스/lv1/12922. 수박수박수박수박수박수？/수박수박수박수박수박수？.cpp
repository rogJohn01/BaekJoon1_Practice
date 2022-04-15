#include <string>
#include <vector>

using namespace std;

string solution(int n) {
 
    string ans = ""; 

for( auto i = 0 ; i < n ; i++){
    i &1 ? ans += "박" : ans += "수" ; 
}
    return ans ; 
    
}