#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    ll x = 0;
    ll ans = 0;
    REP(i, N){
        if (S[i] == 'I'){
            x += 1;
        }else {
            x -= 1;
        }
        ans = max(ans, x);
    }
    cout << ans << endl;

    return 0;
}