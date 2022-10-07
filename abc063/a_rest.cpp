#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int A,B; cin >> A >> B;
    if (A+B >= 10) cout << "error"; else cout  << A+B;
    return 0;
}