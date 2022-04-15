#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
     if (a > b){
		swap(a,b);
	}
    
    long long sumv = 0 ; 
	for ( int i =a ; i < b+1 ; i++){
		sumv += i ; 
	}
	return sumv ; 
}