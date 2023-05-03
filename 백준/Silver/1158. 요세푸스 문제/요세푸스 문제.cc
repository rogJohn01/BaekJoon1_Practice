
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        arr[i] = i + 1;
    }

    std::vector<int> ans;
    std::vector<bool> dead(N, false);

    int i = -1;
    while (ans.size() != static_cast<size_t>(N)) {
        int k = K;
        while (k) {
            i = (i + 1) % N;
            if (!dead[i]) {
                k -= 1;
            }
        }

        dead[i] = true;
        ans.push_back(arr[i]);
    }

    std::stringstream s;
    s << "<";
    for (size_t i = 0; i < ans.size(); ++i) {
        int a = ans[i];
        if (i == ans.size() - 1) {
            s << a << ">";
        } else {
            s << a << ", ";
        }
    }

    std::cout << s.str() << std::endl;

    return 0;
}

