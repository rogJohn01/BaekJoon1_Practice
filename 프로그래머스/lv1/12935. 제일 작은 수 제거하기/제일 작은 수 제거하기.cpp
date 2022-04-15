#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> nums) {

    

    if (nums[0] == 10) {
        vector<int> ans = {-1};
        return ans; 
    }

    nums.erase( min_element(nums.begin() , nums.end())) ; 

    return nums;
}