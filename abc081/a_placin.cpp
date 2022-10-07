#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    int ans = 0;
    REP(i,3){
        if(s[i] == '1') ans++;
    }
    cout << ans;
    return 0;
}