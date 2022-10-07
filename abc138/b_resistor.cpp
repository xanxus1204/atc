#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N;
    cin >> N;
    vector<ll> A(N);
    double ans;
    REP(i,N) cin >> A[i];
    REP(i,N){
        ans = ans + 1.0/A[i];
    }
    cout <<  setprecision(15) << 1/ans << endl;

    return 0;
}