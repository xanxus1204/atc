#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int H,W; cin >> H >> W;
    vector<string> a(H);
    REP(i,H) cin >> a[i];
    for (int i = 0; i < W+2; i++) {
        cout << "#" ;
    }
    cout << endl;

    REP(i,H) cout << "#"  << a[i] << "#" << endl;

    for (int i = 0; i < W+2; i++) {
        cout << "#" ;
    }
    cout << endl;
    return 0;
}