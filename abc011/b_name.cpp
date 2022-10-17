#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S;
    cin >> S;
    int N = S.length();
    for (int i = 0; i < N; i++) {
        if (i==0) {
            cout << toupper(S[i], locale::classic());
        } else {
            cout << tolower(S[i], locale::classic());
        }
    }
    cout << endl;
    return 0;
}