#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, P;
    cin >> N >> P;
    vector<ll> a(N);
    REP(i,N) cin >> a[i];
    REP(i,N){
        if(a[i]%2 != 0){
            cout << ll(pow(2, N-1));
            return 0;
        }
    }
    if(P == 0){
        cout << ll(pow(2, N));
    }else{
        cout << 0;
    }

    return 0;
}