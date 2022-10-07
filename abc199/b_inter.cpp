#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> A(N), B(N);
    REP(i,N) cin >> A[i];
    REP(i,N) cin >> B[i];
    ll M = *std::max_element(B.begin(), B.end());
    ll ans = 0;
    for (int x = 1; x <=M; x++) {
        int ok = 0;
        for (int j = 0; j < N; j++) {
            if (x >= A[j] && x <= B[j]) {
                ok++;
            }else{
                break;
            }
        }
        if (ok == N) {
            ans++;
        }
    }  
    cout << ans << endl;
    return 0;
}