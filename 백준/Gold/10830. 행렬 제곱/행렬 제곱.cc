#include <iostream>
#include <vector>

using namespace std;

int N;
long long B;
vector<vector<int>> mat;

void input(){
    cin >> N >> B;
    mat = vector<vector<int>>(N, vector<int>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0; j < N ; j++){
            cin >> mat[i][j];
            mat[i][j] %= 1000;
        }
    }
}

vector<vector<int>> mul(vector<vector<int>> A , vector<vector<int>> B){
    vector<vector<int>> res(N , vector<int>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            for(int k = 0 ; k < N ; k++){
                res[i][j] += (A[i][k] * B[k][j]) % 1000;
                res[i][j] %= 1000;
            }
        }
    }
    return res;
}

vector<vector<int>> divide(long long B){
    if(B == 1) return mat;
    vector<vector<int>> half = divide(B / 2);
    if(B % 2 == 0) return mul(half, half);
    else return mul(mul(half, half), mat);
}

void print(vector<vector<int>> v){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    input();
    vector<vector<int>> res = divide(B);
    print(res);
}
