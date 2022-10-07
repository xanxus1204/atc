#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N,S,D; cin >> N >> S >> D;
    vector<ll> X(N);
    vector<ll> Y(N);
    REP(i,N) cin >> X[i] >> Y[i];

    for (int i = 0; i < N; i++) {
        if (X[i] < S && Y[i] > D) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}