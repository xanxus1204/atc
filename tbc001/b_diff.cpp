#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> A(N),B(N);
    REP(i,N) cin >> A[i] >> B[i];
    ll smax = 0;
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] > smax) {
            smax = A[i];
            ans = A[i] + B[i];
        }
    }
    cout << ans << endl;
    return 0;
}