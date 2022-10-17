#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int get_count(int L, int R) {
    int count = 0;
    for (int B = L; B <= R; B++) {
        for (int A = B; A <= R; A++) {
           int C = A - B;
           if (C >= L && C <= R) count++;
        }
    }
    return count;
}

int main() {
    ll T; cin >> T;
    vector<ll> L(T), R(T);
    REP(i,T) cin >> L[i] >> R[i];
    for (int i = 0; i < T; i++) {

        int count = get_count(L[i],R[i]);
        cout << count << endl;

    }

    return 0;
}