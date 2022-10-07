#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N,K;
    cin >> N >> K;
    double ans = 0;
    for(int i = 1; i <= N; i++){
        int count = i;
        double res = 1.0/N;
        while(count < K){
            count *= 2;
            res /= 2;
        }
        ans += res;
    }
    cout << setprecision(12) << ans;
    return 0;
}