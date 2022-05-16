
#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

int main() { 
    int N ,M ; 
    cin >> N >> M ; 
    
    vector<int> packs;
    vector<int> ones;
    int p , o ; 
    for( int a = 0 ; a <M ; a++){
        cin >> p >> o ; 
        packs.push_back(p);
        ones.push_back(o); } 

    int pack = *min_element(packs.begin() , packs.end() ) ; 
    int one = *min_element(ones.begin() , ones.end() ) ;
    
    cout << min( { ( N/6)*pack+ pack , ( N/6)*pack + (N%6)*one  , one*N}) ;

} 

