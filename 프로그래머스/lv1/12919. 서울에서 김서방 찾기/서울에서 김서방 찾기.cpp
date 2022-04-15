#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    
    
string ans = "김서방은 ";

for (int i=0 ; i <seoul.size() ; i++){
	if (seoul[i] =="Kim"){
		ans += to_string(i);
	}

}
ans +="에 있다";
return ans; 

}