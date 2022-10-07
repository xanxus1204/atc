#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> a(N);
    REP(i,N) cin >> a[i];
    ll next = 1, ans = 0;
    REP(i,N){
        if(next == a[i]){
            next++;
        }else{
            ans++;
        }
    }
    if (ans == N) ans = -1;
    cout << ans << endl;

    return 0;
}