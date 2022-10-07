#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];
    vector<ll> cnt(202);
    for (int i = 0; i < N; i++) {
        int mod = A[i] % 200;
        cnt[mod] += 1;
    }
    ll ans = 0;
    for (int i = 0; i < 200; i++) {
        ans = ans + (ll) cnt[i]*(cnt[i]-1)/2;
    }
    cout << ans << endl;
    return 0;
}