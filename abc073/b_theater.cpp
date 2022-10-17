#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> l(N);
    vector<ll> r(N);
    REP(i,N) cin >> l[i] >> r[i];
    ll ans = 0;
    REP(i,N){
        ans += r[i] - l[i] + 1;
    }
    cout << ans;
    return 0;
}