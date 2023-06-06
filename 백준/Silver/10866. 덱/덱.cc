
#include <iostream>
#include <vector> 
#include <string> 
#include <cstring> 
#include <algorithm> 
#include <cmath> 
#include <unordered_map>
#include <map> 
#include <sstream> 
#include <queue> 
#include <set> 
#include <deque> 
#define jl "\n"
using namespace std; 


int N ; 
string s ; 

deque<int> dq ; 

void operate(vector<string> words){
   
   // cout << words[0] << jl ; 

    if(words.size() >1){
        if(words[0] =="push_back"){
            dq.push_back(stoi(words[1])) ;      
        }else {
            dq.push_front(stoi(words[1]))  ;
        }
    }else {
        if(words[0] =="front"){
            if(!dq.empty()){
                cout << dq.front() << jl ; 
            }else cout << -1 << jl ; 
        }else if(words[0] =="back"){
            if(!dq.empty()){
                cout << dq.back() << jl ; 
            }else cout << -1 << jl ;  
        }else if(words[0] =="size") cout << dq.size()  << jl ; 
        else if(words[0] =="empty"){
            if(!dq.empty()) cout << 0 << jl ; 
            else cout << 1 << jl ; 
        }else if(words[0] =="pop_back"){
            if(!dq.empty()){
                cout << dq.back() << jl ; 
                dq.pop_back() ; 
            }else cout << -1 << jl ; 
        }else if(words[0] =="pop_front"){
            if(!dq.empty()){
                cout << dq.front() << jl ; 
                dq.pop_front() ;
            }else cout << -1 << jl ; 
        }
    }
    


}

vector<string> check(string s){
   istringstream iss(s) ;
   vector<string> box ; 
   for(string s ; iss >> s ; ){
        box.push_back(s) ;
   }
   return box ; 
}

void unit_test(){ 


    vector<string> words =  check("hello world") ;
    for(auto w:words) cout <<  w <<  endl ; 
    cout << "size: " << words.size() ; 

}

int main() { 
    cin >> N ;
    cin.ignore() ; 
    string t; 
    for(int i=0 ; i < N ; i++){
        getline(cin , t ) ;
        vector<string> words =  check(t)  ;
        operate(words) ;
    }

}


