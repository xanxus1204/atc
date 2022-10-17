#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N;
    vector<int> a(N),b(N),c(N);
    REP(i,N) cin >> a[i] >> b[i] >> c[i];

    vector<vector<int>> dp(N+1, vector<int>(3,0));
    
    // a=0,b=1,c=2
    for (int i = 1; i < N+1; i++) {
        dp[i][0] = max(dp[i-1][1] + a[i-1], dp[i-1][2] + a[i-1]);
        dp[i][1] = max(dp[i - 1][2] + b[i-1], dp[i - 1][0] + b[i-1]);
        dp[i][2] = max(dp[i - 1][0] + c[i-1], dp[i - 1][1] + c[i-1]);
    }
    int ans = max({dp[N][0], dp[N][1], dp[N][2]});
    cout << ans << endl;

    return 0;
}