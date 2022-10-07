#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N;
    vector<ll> A(N), B(N);
    REP(i,N) cin >> A[i] >> B[i];
    int ans = 1000000;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int tmp;
            if (i == j) {
                tmp = A[i] + B[j];
            }else{
                tmp = max(A[i], B[j]);
            }
            if (tmp <= ans) {
                ans = tmp;
            }
        }

    }
    cout << ans << endl;
            
    return 0;
}