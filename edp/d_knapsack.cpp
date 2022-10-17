#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, W; cin >> N >> W;
    vector<ll> weight(N), value(N);
    REP(i, N) cin >> weight[i] >> value[i];
    vector<vector<ll>> dp(N+1, vector<ll>(W+1,0));
    for (int i = 1; i <= N; i++) {
        for (int w = 0; w <= W; w++) {
            if (weight[i-1] >= w) {
                dp[i][w] = dp[i-1][w];
            }else{
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i-1] + value[i-1]]);
            }
        }
    }
    cout << dp[N][W] << endl;

    return 0;
}