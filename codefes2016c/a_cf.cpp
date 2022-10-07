#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string s; cin >> s;
    int c = 1000;
    int f = 1000;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'C' && c == 1000) {
            c = i;
        }else if (s[i] == 'F') {
            f = i;
        }
    }
    if (c == 1000 || f == 1000) {
        cout << "No" << endl;
        return 0;
    }else if (c < f) {
        cout  << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}