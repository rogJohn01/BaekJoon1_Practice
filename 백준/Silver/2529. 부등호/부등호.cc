#include <iostream>
#include <string>

using namespace std; 

int N ; 
char operands[9] ; 
bool record[10] = {false ,} ; 
string maxv , minv ; 

bool check(int i , int j , char iq){
    if( iq == '<' ) return i < j ;
    else return i > j ; 
}

void backtrack(int ix , string s ){

    if( ix ==N+1){
        if(!minv.size()) minv = s; 
        else maxv = s; 
        return ; 
    }

    for(int n=0; n<10 ; n++){
        if( record[n]) continue ; 
        if( ix ==0 || check(s[ix-1] , n+'0', operands[ix-1])){
            record[n] = true ; 
            backtrack(ix+1 , s+to_string(n));
            record[n] = false ;
        }
    }
}

int main() { 

    cin >> N ; 
    int t = N ; 
    for(int i=0; i < N ; i++) cin >> operands[i] ; 
    
    backtrack(0, "") ; 
    cout << maxv << '\n' ; 
    cout << minv << '\n' ; 
    return 0 ; 

}
