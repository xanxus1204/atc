#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> V(N);
    vector<ll> hand(N);
    REP(i, N) cin >> V[i];
    int num = min(N, K);
    ll res = 0;
    for (int j = 0; j <= num; j++){
        for (int i = 0; i <= j; i++){
            int A = i;
            int B = j - i;
            int drop = K - j;
            hand.clear();
            while(A > 0){
                hand.push_back(V[A-1]);
                A--;
            }
            while (B > 0)
            {
                hand.push_back(V[N-B]);
                B--;
            }
            sort(hand.begin(), hand.end());
            REP(i, drop){
                if (hand[i] < 0){
                    hand[i] = 0;
                }
            }
            ll tmp = accumulate(hand.begin(), hand.end(), 0);
            res = max(res, tmp);
        }
    }
    cout << res << endl;
    
    return 0;
}