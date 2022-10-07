#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, W;
    cin >> N >> W;
    vector<ll> weight(N), value(N);
    REP(i,N) cin >> weight[i] >> value[i];
    vector<vector<ll>> dp(N+1, vector<ll>(W+1,0));
    for (int i = 0; i < N; i++) {
        for(int w = 0; w<=W; w++) {
            if (w >= weight[i]) {
                dp[i+1][w] = max(dp[i][w], dp[i][w-weight[i]] + value[i]);
            }else{
                dp[i+1][w] = dp[i][w];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}