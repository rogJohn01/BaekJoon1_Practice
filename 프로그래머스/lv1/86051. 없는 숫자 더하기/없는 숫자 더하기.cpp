#include <string>
#include <vector>

using namespace std;

int solution(vector<int> nums) {

    
int sumv = 0 ; 
for (int i =0 ; i <nums.size(); i++){
    sumv += nums[i];
}
    
    return 45-sumv; 
    
    
}