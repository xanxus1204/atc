#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];
    ll ans = 0;
    for (int l = 0; l < N; l++){
        for(int r = l; r < N; r++){
            vector<ll> cp_arr(r-l+1);
            copy(A.begin() + l, A.begin()+r+1, cp_arr.begin());
            ll x = *min_element(cp_arr.begin(), cp_arr.end());
            ll tmp = x*(r-l+1);
            if (tmp > ans){
                ans = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}