#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int D, N; cin >> D >> N;
    if (N == 100){
        cout << setprecision(10) << 101  * pow(100, D) << endl;

    }else {
        cout << setprecision(10) << N * pow(100, D) << endl;
    }
    return 0;
}