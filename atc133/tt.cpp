#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int ans = N*A < B ? N*A : B;
    cout << ans << endl;
    return 0;
}