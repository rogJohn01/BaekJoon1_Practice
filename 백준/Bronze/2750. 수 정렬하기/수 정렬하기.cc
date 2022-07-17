#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <map>
#include <queue>
#define jl "\n"
using namespace std;

int main() {
	int N ,n ; cin >> N ; 
	vector<int> nums ;
	while (N--){ cin >> n ; nums.push_back(n) ; } 
	sort(nums.begin() , nums.end()) ; 
	for(auto n:nums) cout << n << jl ; 

}


