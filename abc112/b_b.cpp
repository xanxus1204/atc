#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll B,C; cin >> B >> C;
    B = abs(B);
    if (C <= 2){
        cout << 3 << endl;
        return 0;
    }
    ll ans = C + 2 * B;
    if (ans %2 != 0){
        cout << ans-1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}