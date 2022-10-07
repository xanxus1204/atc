#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    const ll AMAX = 100000;
    vector<ll> count(AMAX);
    ll N,K;
    cin >> N >> K;
    REP(i, N){
        ll A,B;
        cin >> A >> B;
        count[A] += B;
    }
    for(int ans = 1; ans <= AMAX; ans++){
        
        if (K <= count[ans]){
            cout << ans << endl;
            break;
        }
        K -= count[ans];
    }
    return 0;
}