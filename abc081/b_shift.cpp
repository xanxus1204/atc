#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N;
    vector<ll> A(N);
    REP(i,N) cin >> A[i];
    bool odd = false;
    int ans = 0;
    while(!odd){
        REP(i,N){
            if (A[i] % 2 == 0){
                 A[i] = A[i] / 2;   
            }else{
                odd = true;
                ans -= 1;
                break;
            }
        }
        ans += 1;

    }
    cout << ans << endl;
    return 0;
}