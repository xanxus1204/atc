#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, C, K;
    cin >> N >> C >> K;
    vector<ll> T(N);
    REP(i, N) cin >> T[i];
    ll ans = 0;
    ll leave = T[0] + K;
    ll num = 0;
    REP(i, N){
        if(T[i] <= leave && num <= C){
            num++;
        }else{
            num = 0;
            ans++;
            leave = T[i] + K; 
        }
    }
    cout << ans;
    return 0;
}