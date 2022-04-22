#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    for(auto  i =1 ; i <=n ; i++ ){
        if (n % i ==1) return i ; 
    }
}