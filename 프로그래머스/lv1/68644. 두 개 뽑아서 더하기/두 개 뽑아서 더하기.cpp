#include <string>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(vector<int> nums) {
   
vector <int> ans ;
for (int i = 0 ; i < nums.size(); i++ ) {
    for ( int j = i+1 ; j < nums.size() ; j++){
        ans.push_back(nums[i] + nums[j] ) ; 
    } 
}
sort( ans.begin() , ans.end()) ; 

ans.erase(unique(ans.begin() , ans.end()) , ans.end() ) ; 
return ans; 
}