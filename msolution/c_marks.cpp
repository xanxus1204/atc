#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;


int main() {
    ll N,K; cin >> N >> K;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];
    ll last = 0;
    for (int i = K; i < N; i++) {
       if (A[i-K] < A[i]) {
           cout << "Yes" << endl;
       }else{
           cout << "No" << endl;
       }
    }
    return 0;
}