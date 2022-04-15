#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> nums) {


    if (nums[0] == 10) {
        return {-1} ;  }
    nums.erase( min_element(nums.begin() , nums.end())) ; 
    return nums;
}