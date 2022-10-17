#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    double X;
    cin >> N >> X;
    vector<double> V(N);
    vector<double> P(N);
    REP(i, N) cin >> V[i] >> P[i];
    double alc = 0;
    REP(i, N) {
        alc += V[i]*P[i]/100.0;
        if(alc > X){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}