#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N;
    vector<int> T(N);
    REP(i,N) cin >> T[i];
    int t_max = 100;
    for (int i = 0; i < N; i++) {
        t_max = min(T[i], t_max);
    }
    cout << t_max << endl;
    return 0;
}