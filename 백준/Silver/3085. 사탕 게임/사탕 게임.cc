#include <iostream>
#include <algorithm>
using namespace std;

int N;
char board[51][51]; 

int check() {
    int ans = 1;
    for (int i = 0; i < N; i++) {
        int cnt = 1;
        for (int j = 1; j < N; j++) {
            if (board[i][j] == board[i][j-1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (ans < cnt) ans = cnt;
        }
        cnt = 1;
        for (int j = 1; j < N; j++) {
            if (board[j][i] == board[j-1][i]) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (ans < cnt) ans = cnt;
        }
    }
    return ans;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j + 1 < N) {
                swap(board[i][j], board[i][j+1]);
                int temp = check();
                if (ans < temp) ans = temp;
                swap(board[i][j], board[i][j+1]);
            }
            if (i + 1 < N) {
                swap(board[i][j], board[i+1][j]);
                int temp = check();
                if (ans < temp) ans = temp;
                swap(board[i][j], board[i+1][j]);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
