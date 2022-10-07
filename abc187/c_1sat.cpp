#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<string> S(N);
    REP(i, N) cin >> S[i];
    for (int i = 0; i < N-1; i++) {
        string tmp = S[i];
        for (int j = i+1; j < N; j++) {
            if (tmp[0] == '!' && tmp.substr(1) == S[j]) {
               cout << S[j] << endl;
               return 0;
            }else if (tmp[0] != '!' && tmp == S[j].substr(1)){
                cout << tmp << endl;
                return 0;
            }
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}