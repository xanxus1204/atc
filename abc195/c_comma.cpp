#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    int ans = 0;
    while(N>999){
        cout << N << endl;
        if (N >= pow(10,6)) {
            ll tmp = (N - pow(10,6) + 1)*2;
            ans += tmp;
            N = N / 1000;
        }else if (N >= pow(10,3)) {
            ll tmp = N - pow(10, 3)+1;
            ans += tmp;
            N = N / 1000;
        }
    }
    cout << ans << endl;
    return 0;
}