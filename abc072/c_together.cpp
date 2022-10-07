#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> a(N);
    REP(i,N) cin >> a[i];
    vector<ll> cnt(N);
    REP(i,N){
        cnt[a[i]] += 1; 
    }
    // REP(i,N) cout << cnt[i];
    ll ans = 0;
    for(int X = 1; X < N; X++){
        ll tmp = cnt[X] + cnt[X-1] + cnt[X+1];
        ans = max(ans, tmp);
    } 
    cout << ans;
    return 0;
}