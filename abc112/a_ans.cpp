#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
ll sum(const ll &a, const ll &b) {
    return (a+b) * (b-a+1) / 2;
}

int main() {
    int T; cin >> T;
    while(T--){
        ll L,R;
        cin >> L >> R;
        const long minC = L;
        const long maxC = R - L;
        if(minC > maxC) {
            cout << 0 << endl;
        }else{
            cout << sum(R-maxC-L+1, R-minC-L+1) << endl;
        }
    }
    return 0;
}