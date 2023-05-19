#include <iostream> 
#include <string>
#include <vector>
#include <unordered_map> 
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    
    unordered_map<string,int> mp ; 
    for(int i =0 ; i < name.size() ; i++){
        mp[ name[i]] = yearning[i]  ; 
    }
    
    vector<int> answer; 
    for(int r=0 ; r < photo.size() ; r++){
        int v = 0 ; 
        for(int c=0 ; c < photo[r].size() ; c++){
            v += mp[photo[r][c]] ; 
        }
        answer.push_back(v) ; 
    }
    
    
    
    return answer;
}