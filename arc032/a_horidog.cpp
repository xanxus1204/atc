#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    ll sum = 0;
    if (n == 1) {
        cout << "BOWWOW" << endl; 
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    for (int i = 2; i < sum; i++) {
        if (sum % i == 0) {
            cout << "BOWWOW" << endl;
            return 0;
        }
    }
    cout << "WANWAN" << endl;
    return 0;
}