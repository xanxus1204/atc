#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N;
    int ans = 0;
    while (N>0)
    {
        N = N - 100;
        ans++;
    }
    cout << ans << endl;
    
    return 0;
}