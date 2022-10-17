#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i,n) cin >> a[i];
    ll sum = a[0];
    ll ans = 0;
    REP(i,n-1){
        ll before = sum;
        sum = sum +  a[i+1];
        if ()
        cout << sum;
    }
    return 0;
}