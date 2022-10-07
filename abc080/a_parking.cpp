#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    cout << min(A*N, B);
    return 0;
}