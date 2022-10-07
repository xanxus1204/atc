#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> T(N);
    REP(i,N) cin >> T[i];
    ll M; cin >> M;
    vector<ll> P(M);
    vector<ll> X(M);
    REP(i,M) cin >> P[i] >> X[i];
    ll s = accumulate(T.begin(), T.end(), 0);
    for (int i = 0; i < M; i++){
        cout << s - T[P[i]-1] + X[i] << endl;
    }
    return 0;
}