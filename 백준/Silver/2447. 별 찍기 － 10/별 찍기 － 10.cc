
#include <iostream> 
#include <cmath> 
using namespace std; 

int N; 

void star(int x, int y, int n ) 
{
    if ((x/n) % 3 ==1 && (y /n ) % 3 ==1 ) cout << " ";

    else {
        if (n==1) cout << "*" ; 
        else star(x,y , n /3 ) ; 
    }
}

int main() {

    int N; 
    cin >> N ;

    for ( int i = 0 ; i < N ; i++ ) {
        for ( int j = 0 ; j < N ; j++ )  
            star(i,j , N/3);
            cout << "\n";
        }
}
        
