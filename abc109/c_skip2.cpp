#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, X;
    cin >> N >> X;
    vector<ll> x(N+1);
    REP(i, N) cin >> x[i];
    x[N] = X;
    sort(x.begin(), x.end());
    ll res = 10000000000;
    for (int i = 0; i < N; i++) {
        ll diff = x[i+1] - x[i];
        res = min(diff, res);
    }
    cout << res << endl;
    return 0;
}