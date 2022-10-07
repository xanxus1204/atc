#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll H, W; cin >> H >> W;
    ll N = H*W;
    if (H == 1 || W == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (N % 2 == 0) {
        cout << H*W/2 << endl;
    } else {
        cout << H*W/2+1 << endl;

    }
    return 0;
}