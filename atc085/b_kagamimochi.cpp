#include <iostream>
#include <vector>
using namespace std;

constexpr int M = 101;

int main() {
    int N;
    cin >> N;
    vector<int> exist(M, 0);

    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;
        exist[d] = 1;
    }
    int result = 0;
    for (auto val: exist) {
        result += val;
    }

    cout << result << endl;
}
