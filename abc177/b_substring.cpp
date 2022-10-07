#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S, T;
    cin >> S >> T;
    int s = S.length();
    int t = T.length();
    int ans = 100000;
    for (int i = 0; i <= s-t; i++) {
        string tmp = S.substr(i,t);
        int diff = 0;
        for (int j = 0; j < tmp.length(); j++) {
            if (tmp[j] != T[j]) diff++;
        }
        if (diff < ans) {
            ans = diff;
        }
    }
    cout << ans << endl;
    return 0;
}