#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<bool> b ) {
    
    
int bb =1 ;
int sumv = 0 ;
for (auto i=0; i<a.size(); i++){
    if (b[i] == true  ){
      bb = 1 ;
    }
    else if ( b[i] == false ){
      bb = -1 ;
    }
  sumv +=a[i]*bb ;
}
return sumv ;

}