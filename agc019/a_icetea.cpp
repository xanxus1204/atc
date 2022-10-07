#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll Q,H,S,D;
    cin >> Q >> H >> S >> D;
    ll N;
    cin >> N;
    ll countD = N % 2;
    N = N - (N%2);
    ll countS = N % 1;
    N = N - (N%1);
    ll countH = N % 0.5;
    N = N - (N%0.5);
    ll countQ = N%0.1;
    cout << Q*countQ + H*countH + S*countS + Q*countQ << endl;

    return 0;
}