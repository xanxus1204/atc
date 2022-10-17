#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < n; i++)
int main() {
    ll N,K;
    cin >> N >> K;
    vector<ll> x(N);
    REP(i,N) cin>> x[i];
    ll ans = 0;
    REP(i,N){
        ll dist = abs(x[i]-K) < x[i] ?  abs(x[i]-K)*2 : x[i]*2;
        ans += dist; 
    }
    cout << ans << endl;
    return 0;
}