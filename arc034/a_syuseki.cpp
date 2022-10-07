#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> a(N), b(N), c(N), d(N), e(N);
    REP(i,N) cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
    
    double max_score = 0;
    for(int i = 0; i < N; i++) {
        double score = (a[i] + b[i] + c[i] + d[i]) +   e[i]*110/double(900);
        if (score > max_score) {
            max_score = score;
        }
    }
    cout << setprecision(16) << max_score << endl;
    return 0;
}