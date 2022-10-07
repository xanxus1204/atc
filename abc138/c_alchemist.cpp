#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N;
    cin >> N;
    vector<double> v(N);
    REP(i,N) cin >> v[i];
    sort(v.begin(), v.end());
    double ans;
    REP(i,N-1){
        if (i == 0){
            ans = (v[i] + v[i+1]) / 2;
        }else{
            ans = (ans + v[i+1]) / 2;
        }
    }
    cout << ans << endl;
    return 0;
}