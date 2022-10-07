#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S;
    cin >> S;
    ll N = S.length();
    bool flag = true;
    ll ans = 0;
    int index = 0;
    while(flag){
        flag = false;
        for(int i = index ; i < N-1; i++){
            if(S[i] == 'B' && S[i+1] == 'W'){
                S[i] = 'W';
                S[i+1] = 'B';
                flag = true;
                ans++;
                index = i-1;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}