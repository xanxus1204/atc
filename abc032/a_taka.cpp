#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll a,b,n; cin >> a >> b >> n;
    while(true) {
        if (n % a == 0 && n % b == 0) {
            cout << n << endl;
            break;
        } 
        n++;
    }
    return 0;
}