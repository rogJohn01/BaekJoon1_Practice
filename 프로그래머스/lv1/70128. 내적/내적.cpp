#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {

    int sumv = 0 ;
    for (auto i=0; i<a.size(); i++){
      sumv +=a[i]*b[i] ;
    }
    return sumv ;
}