#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N,K;
    cin >> N >> K;
    vector<ll> ans;
    ll a, b;
    REP(i,N){
        cin >> a >> b;
        ans.insert(ans.end(), b, a);
    }
    // REP(i,ans.size()) cout << ans[i];
    // sort(ans.begin(), ans.end());
    cout << ans[K];
    return 0;
}