#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];
    //0番目はプラスの場合
    ll tmp = a[0];
    ll ans1 = 0;
    if (a[0] <= 0){ //負ならプラスにする
        ans1 += abs(a[0] - 1);
        a[0] = 1;
    }
    ll sum = a[0];
    for(int i = 0; i < n-1; i++){
        sum = sum + a[i+1];
        if (i % 2 == 0 && sum > 0){
            ans1 += abs(sum + 1);
            sum = -1;
        }else if(i % 2 != 0 && sum < 0){
            ans1 += abs(sum - 1);
            sum = 1;
        }
    }

    a[0] = tmp;//もどす
    
    //0番目は負の場合
    ll ans2 = 0;
    if (a[0] >= 0){ //プラスなら負にする
        ans2 += abs(a[0] + 1);
        a[0] = -1;
    }
    sum = a[0];
    for(int i = 0; i < n-1; i++){
        sum = sum + a[i+1];
        if (i % 2 == 0 && sum < 0){
            ans2 += abs(sum - 1);
            sum = 1;
        }else if(i % 2 != 0 && sum > 0){
            ans2 += abs(sum + 1);
            sum = -1;
        }
        
    }
    ans2 += 1;
    cout << min(ans1, ans2);
    return 0;
}