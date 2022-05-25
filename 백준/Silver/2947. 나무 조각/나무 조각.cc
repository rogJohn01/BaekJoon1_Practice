#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
using namespace std; 

int p[6] ; 

int main() { 

    for(int i=1 ; i < 6 ; i++)  cin >> p[i] ; 

    for(auto j =0 ; j < 5; j++) {
        for( int i =1 ; i < 6   ; i++) { 
            if ( p[i-1] > p[i] ){ 
                swap( p[i-1] , p[i] ) ; 
                for( int a = 1; a <6;  a++) {
                    cout << p[a] << " " ; }
                cout << endl;  } } } 
    
} 


