#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S;
    cin >> S;
    if (S[0] == S[1] && S[1] == S[2]) {
        cout << "Won" << endl;
    }else{
        cout << "Lost" << endl;
    }
    return 0;
}