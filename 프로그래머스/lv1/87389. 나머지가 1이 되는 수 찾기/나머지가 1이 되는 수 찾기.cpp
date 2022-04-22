#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    for(auto  i =1 ; n <1000000 ; i++ ){
        if (n % i ==1) return i ; 
    }
}