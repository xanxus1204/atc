#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    REP(i,N) cin >> A[i];
    ll ans = 0;
    for (int  i = 0; i < N; i++) {
        ans = ans * 2 + A[i];
    }
    cout << ans << endl;
    return 0;
}