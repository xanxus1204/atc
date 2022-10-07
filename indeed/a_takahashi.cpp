#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    ll ans = 2;
    ll dist_x = abs(x2-x1);
    ll dist_y = abs(y2-y1);
    if (dist_x+dist_y == 1) {
        cout << ans << endl;
    }else{
        cout << ans + dist_x + dist_y - 1 << endl;
    }

    return 0;
}