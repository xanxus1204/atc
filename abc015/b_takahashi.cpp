#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N; cin >> N;
    vector<int> A(N);
    REP(i,N) cin >> A[i];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            sum += A[i];
            count++;
        }
    }
    cout << ceil(float(sum)/count) << endl;

    return 0;
}