#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    ll ans = 0;
    for (int i = 1; i <= N; i++){
        if(i < 10){
            ans++;
        }else if (i >= 100 && i <= 999){
            ans++;
        }else if (i >= 10000 && i <= 99999){
            ans++;
        }
    }
    cout << ans;
    return 0;
}