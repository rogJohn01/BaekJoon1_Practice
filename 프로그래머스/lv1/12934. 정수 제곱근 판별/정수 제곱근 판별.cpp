#include <string>
#include <vector>
#include <cmath> 
using namespace std;

long long solution(long long n) {

	if( sqrt(n) == round(sqrt(n)) ) {
        return  pow(round(sqrt(n))+1 ,2 ) ; 
    }
    else {
        return -1 ; 
    }
}