#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N, X;
    cin >> N >> X;
    vector<ll> A(N);
    REP(i,N) cin >> A[i];
    for (int i = 0; i < N; i++){
        if (A[i] != X){
            cout << A[i] << " ";
        }
    }
    cout << " " << endl;
    return 0;
}