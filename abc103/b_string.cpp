#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S, T;
    cin >> S >> T;
    REP(i,S.length()){
        S = S[S.length()-1] + S.substr(0,S.length()-1);
        if(S == T){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}