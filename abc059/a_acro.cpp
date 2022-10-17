#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    char lower = s1[0] + s2[0] + s3[0];
    cout << lower << endl;
    // string ans = transform(lower.cbegin(), lower.cend(), lower.begin(), toupper);
    // cout << ans;
    return 0;
}