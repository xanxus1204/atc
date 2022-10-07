#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string X, s;
    cin >> X >> s;
    cout << regex_replace(s,regex(X),"") << endl;
    return 0;
}