#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> h(N);
    REP(i, N) cin >> h[i];
    ll dp[N]; 
    dp[0] = 0;
    for (int i = 1; i < N; i++) {
        if (i == 1) {
            dp[i] = abs(h[i] - h[i-1]);
        }else{
            for (int j = 1; j <= K; j++){
                if (j <= i) {
                     
                    dp[i] = min(dp[i], dp[i-j] + abs(h[i] - h[i-j]));

                }
                
            }
        }
    }
    cout << dp[N-1] << endl;
    
    return 0;
}