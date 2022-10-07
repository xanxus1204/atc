#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N;
    cin >> N;
    vector<string> s(N);
    unordered_map<string,int> mp;
    ll ans = 0;
    REP(i,N){
        string tmp; cin >> tmp;
        vector<char> tmpc(10);
        REP(j,10){
            tmpc[j] = tmp[j];
        }
        sort(tmpc.begin(), tmpc.end());
        string tmpstr = "";
        REP(k,10) tmpstr = tmpstr + tmpc[k];
        mp[tmpstr] += 1;
        if(mp[tmpstr] > 1){
            ans += mp[tmpstr] - 1;
        }
       
    }
   
    cout << ans;
    
    return 0;
}