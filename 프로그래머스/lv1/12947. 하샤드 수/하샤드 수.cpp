#include <string>
#include <vector>

using namespace std;

int helper(int n) {
	int sumv = 0 ; 
	while( n> 0 ) {
		sumv += n%10 ; 
		n /= 10 ; 
	}
	return sumv ; 
}
bool solution(int x) {
    
	return x % helper(x) == 0 ; 
}