#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
    int N; ll W;
    cin >> N >> W;
    vector<ll> weight(N), value(N);
    REP(i,N) cin >> value[i] >> weight[i];

    //DP table
    vector<vector<ll>> dp(N+1, vector<ll>(W+1, 0));
    for (int i = 0; i < N; i++) {
        for (int w = 0; w <= W; w++) {
          if (w >= weight[i]) {
              dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
          }else{
              dp[i+1][w] = dp[i][w];
          }
        }
    }
    cout << dp[N][W] << endl;

    return 0;
}