#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sumv = 0; 
    for (auto i =0 ; i < arr.size() ; i ++){
      sumv += arr[i];  }
    return sumv/arr.size(); 
}