#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll L,H; cin >> L >> H;
    ll N ; cin >> N;
    vector<ll> A(N);
    REP(i,N) cin >> A[i];
    for (int i = 0; i < N; i++) {
        if (A[i] < L) {
            cout << L - A[i] << endl;
        }else if (A[i] >= L && A[i] <= H) {
            cout << 0 << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}