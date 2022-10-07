#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S; cin >> S;
    int N = S.length();
    int res = 999999999;
    REP(i, N-2){
        res = min(res, abs(753 - stoi(S.substr(i,3))));
    }
    cout << res << endl;
    return 0;
}