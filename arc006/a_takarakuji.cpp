#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    vector<int> E(6), L(6);
    REP(i, 6) cin >> E[i];
    int B; cin >> B;
    REP(i, 6) cin >> L[i];
    int count = 0;
    int bonus = 0;
    for (int i = 0; i < 6; i++) {
        if (E[i] == L[i]) {
            count++;
        }
        if (L[i] == B) {
            bonus = 1;
        }
    }
    if (count == 3) {
        cout << 5 << endl;
    }else if (count == 4) {
        cout << 4 << endl;
    }else if (count == 5) {
        if (bonus) {
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }else if (count == 6) {
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}