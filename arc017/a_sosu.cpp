#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    for (int i = 2; i < N; i++){
        if(N % i == 0){
            cout << "NO" << endl;
            return 0;
        }

    }
    cout << "YES" << endl;
    return 0;
}