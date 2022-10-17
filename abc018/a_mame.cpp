#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll A,B,C; cin >> A >> B >> C;
    vector<ll> a(3); 
    a[0] = A;
    a[1] = B;
    a[2] = C;
    sort(a.begin(), a.end(), greater<ll>{});
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == A) cout << i+1 << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == B) cout << i+1 << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == C) cout << i+1 << endl;
    }

    return 0;
}