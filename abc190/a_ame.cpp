#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int A,B,C; cin >> A >> B >> C;
    if (A > B ) {
        cout << "Takahashi" << endl;
    }
    if (B > A ) {
        cout << "Aoki" << endl;

    }
    if (A == B) {
        if (C == 0) {
            cout << "Aoki" << endl;
        }else{
            cout << "Takahashi" << endl;

        }
    }
    return 0;
}