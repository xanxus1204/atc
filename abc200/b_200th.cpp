#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N,K; cin >> N >> K;
    for (int i = 0; i < K; i++){
        if (N % 200 == 0) {
            N = N / 200;

        }else{
            string tmp = to_string(N);
            tmp = tmp + "200";
            N = stoll(tmp);
        }
    }
    cout << N << endl;
    return 0;
}