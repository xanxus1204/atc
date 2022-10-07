#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> A(N+1);
    vector<ll> B(N);
    for (int i = 0; i < N+1; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    ll ans = 0;
    for (int i = 0; i < N; i++){
        ll left = min(A[i], B[i]);
        ans += left;
        A[i] -= left;
        B[i] -= left;

        ll right = min(A[i+1], B[i]);
        ans += right;
        A[i+1] -= right;
        B[i] -= right;
    }
    cout << ans << endl;
}