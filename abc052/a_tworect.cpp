#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << max(A*B, C*D);
    return 0;
}