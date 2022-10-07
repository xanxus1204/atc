#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector <ll> a(N);
    REP(i,N) cin >> a[i];
    ll sum = 0;
    for (int l=0; l<N; l++){
        ll temp_sum = 0;
        for (int r=l; r<N; r++ ){
            ll temp = *min_element(a.begin() + l, a.begin() + r+1);
            
            temp_sum += temp;
        }
        sum += temp_sum;
    }
    cout << sum << endl;
    return 0;
}