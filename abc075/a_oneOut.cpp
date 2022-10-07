#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll A,B,C;
    cin >> A >> B >> C;
    if (A == B){
        cout << C;
    }else if (B == C){
        cout << A;
    }else{
        cout << B;
    }
    return 0;
}