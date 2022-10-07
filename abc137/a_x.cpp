#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int A,B;
    cin >> A >> B;
    cout << max({A+B, A-B, A*B});
    return 0;
}