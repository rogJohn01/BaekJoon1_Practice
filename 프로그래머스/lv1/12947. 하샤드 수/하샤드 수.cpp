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
    
    if (x % helper(x) ==0)  return true ; 
    else return false ; 

}