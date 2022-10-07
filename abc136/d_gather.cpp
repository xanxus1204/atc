#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<ll> ans(N);
    //Rについてのみ考える
    int count = 0;
    REP(i,N){
        if(S[i] == 'R'){
            count += 1;
        }else{
            ans[i-1] += (count+1)/2;
            ans[i] += count/2;
            count = 0;
        }
    }
    count = 0;
    for(int i = N; i >= 0; i--){
        if(S[i] == 'L'){
            count += 1;
        }else{
            ans[i+1] += (count+1)/2;
            ans[i] += count/2;
            count = 0;
        }
    }
    REP(i,N) cout << ans[i] << " ";

    return 0;
}