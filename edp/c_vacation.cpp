#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;



int main() {
    ll N; cin >> N;
    vector<ll> a(N),b(N),c(N);
    REP(i,N) cin >> a[i] >> b[i] >> c[i];
    vector<vector<ll>> dp(N+1, vector<ll>(3));
    dp[0][0] = 0; //A
    dp[0][1] = 0; //B
    dp[0][2] = 0; //C
    for (int i = 1; i <= N; i++){
        dp[i][0] = max(dp[i-1][1] + a[i-1], dp[i-1][2] + a[i-1] );
        dp[i][1] = max(dp[i-1][2] + b[i-1], dp[i-1][0] + b[i-1] );
        dp[i][2] = max(dp[i-1][0] + c[i-1], dp[i-1][1] + c[i-1] );
    }
    ll ans = max(dp[N][0], max(dp[N][1], dp[N][2]));
    cout << ans << endl;
    return 0;
}