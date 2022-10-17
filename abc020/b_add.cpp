#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll A,B; cin >> A >> B;
    string a = to_string(A);
    string b = to_string(B);
    ll ans = stoi(a+b);
    cout << ans*2 << endl;
    return 0;
}