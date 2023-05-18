#include <iostream>
#include <vector>
#define INF 1e8
using namespace std; 

int tar ;
vector<int> dp;

int dfs(int x) {
    // If x is greater than tar, return INF as it's not a valid solution
    if (x > tar) return INF;
    // If x is equal to tar, return 0 as we've reached the target
    if (x == tar) return 0;
    // If dp[x] is not -1, that means we've computed it before
    if (dp[x] != -1) return dp[x];
    
    // Compute the minimum count for current x and store it in dp[x]
    int cnt1 = INF, cnt2 = INF, cnt3 = INF;
    if (x * 3 <= tar) cnt1 = 1 + dfs(x * 3);
    if (x * 2 <= tar) cnt2 = 1 + dfs(x * 2);
    cnt3 = 1 + dfs(x + 1);
    
    dp[x] =  min(cnt1 , min(cnt2, cnt3)) ;
    return dp[x] ; 
}

int main() { 
    cin >> tar; 
    // Initialize dp vector with -1
    dp.resize(tar + 1, -1);

    cout << dfs(1) << endl; 
}

