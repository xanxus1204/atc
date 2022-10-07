#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> a(N);
    REP(i,N) cin >> a[i];
    ll ans = 0;
    ll start = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = start; j < N; j++) {
            if (a[j] == i) {
                start = j+1;
                break;
            }else{
                ans += 1;
                if (ans > N-1) {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}