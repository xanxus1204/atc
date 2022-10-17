#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    cout << s.front() << s.length() - 2 << s.back();
    return 0;
}