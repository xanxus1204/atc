#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    double T,A; cin >> N >> T >> A;
    vector<double> H(N);
    REP(i,N) cin >> H[i];
    ll ans = 0;
    double min_diff = 100000000000.0;
    for (int i = 0; i < N; i++) {
        double temp = T - H[i] * 0.006;
        double diff = abs(A - temp);
        if (diff < min_diff) {
            min_diff = diff;
            ans = i;
        }
    }
    cout << ans+1 << endl;
    return 0;
}