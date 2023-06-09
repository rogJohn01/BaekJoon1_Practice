#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int target = -1;
    for(int i = n - 1; i > 0; i--) {
        if(a[i - 1] > a[i]) {
            target = i - 1;
            break;
        }
    }

    if(target == -1) {
        cout << "-1" << endl;
        return 0;
    }
    
    for(int i = n - 1; i > 0; i--) {
        if(a[i] < a[target]) {
            swap(a[i], a[target]);
            break;
        }
    }

    sort(a.begin() + target + 1, a.end(), greater<int>());

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    
    return 0;
}

