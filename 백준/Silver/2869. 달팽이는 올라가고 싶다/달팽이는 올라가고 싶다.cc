#include <iostream>
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cmath> 
#define jl "\n"
using namespace std; 

int main() { 
    int  A , B ,V ,days ; 
    cin >> A >> B >> V ; 
    
    days =1 ;  V -= A ; 
    if ( V % (A-B) ==0 ){ 
        days += V / (A-B) ;
        cout << days ; } 
    else if( V > (A-B) ){
        days += V / (A-B) ; 
        cout << days +1 ; } 
    else if( V < (A-B)) { 
        cout << days +1 ; } 


} 
