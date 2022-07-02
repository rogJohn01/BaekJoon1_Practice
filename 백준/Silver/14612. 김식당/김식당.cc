#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    vector<pair<int,int>> order; // time, table num
    int N, M;
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        string s;
        int n,t;
        
        cin >> s;
        
        if(s == "order"){
            cin >> n >> t;
            order.push_back({t,n});
        }
        else if(s == "sort")
            sort(order.begin(), order.end());
        else if(s == "complete"){
            cin >> t;
            
            vector<pair<int,int>>::iterator iter;
            
            for(iter = order.begin(); iter != order.end(); iter++){
                if(t == (*iter).second){
                    order.erase(iter);
                    break;
                }
            }
        }
        
        if(order.empty())
            cout << "sleep\n";
        else{
            for(int j = 0; j < order.size(); j++)
                cout << order[j].second << ' ';
            cout << endl;
        }
 
            
    }
}
