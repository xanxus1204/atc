#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    ll L,R;
    int mod;
    cin >> L >> R;
    R = min(R, L+4038);
    int ans = 2018;

    for (int i = L; i <=R; i++) {
        for (int j = i+1; j <=R; j++) {
            mod = i * j % 2019;
            ans = min(ans, mod);
        }
    }
    cout << ans << endl;
    
}