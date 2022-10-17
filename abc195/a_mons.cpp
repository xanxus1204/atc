#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int M,H; cin >> M >> H;
    if (H%M == 0) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}