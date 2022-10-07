#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> h(N);
    REP(i, N) cin >> h[i];
    ll dp[N]; 
    dp[0] = 0;
    for (int i = 1; i < N; i++) {
        if (i == 1) {
            dp[i] = abs(h[i] - h[i-1]);
        }else{
            dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
        }
    }
    cout << dp[N-1] << endl;
    
    return 0;
}