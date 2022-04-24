#include <string>
#include <vector>

using namespace std;


bool div(int x) {

	int cnt = 0 ;
	for ( int i = 1 ; i <= x ; i++ ) {
		if ( x % i == 0 ) cnt +=1  ;	
	}
	return cnt % 2 ==0 ? true : false ; 
}


int solution(int left, int right) {
int tot = 0; 

	for( int i =left; i  <= right; i ++ ) {
		if ( div(i) ==1) tot +=i ;
		else tot -=i ;
	}
	return tot ; 
}