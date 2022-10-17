#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll a,b; cin >> a >> b;
    if (a <= 0 && b >= 0) {
        cout << "Zero" << endl;
        return 0;
    } 
    if (a > 0){
        cout << "Positive" << endl;
        return 0;
    }
    if (a < 0 && b < 0){
        ll count = abs(a) - abs(b) + 1;
        if (count %2 == 0) {
            cout << "Positive" << endl;
        } else {
            cout << "Negative" << endl;
        }
        return 0;
    }
    if (a > 0 && b > 0) {
        cout << "Positive" << endl;
    }
    return 0;
}