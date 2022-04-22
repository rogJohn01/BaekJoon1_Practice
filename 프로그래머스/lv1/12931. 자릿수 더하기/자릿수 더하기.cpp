#include <iostream>

using namespace std;
int solution(int n)
  { 
     int sumv =0; 
     while( n >0) {

     sumv += n%10 ;
     n /= 10 ;
     }   
     return sumv ;    

 
}