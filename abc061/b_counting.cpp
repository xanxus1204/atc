#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N,M; cin >> N >> M;
    vector<int> a(M), b(M);
    REP(i,M) cin >> a[i] >> b[i];
    map<int, int> dic;
    for (int i = 0; i < M; i++){
        dic[a[i]] += 1;
        dic[b[i]] += 1;
    }
    for (int i = 1; i <= N; i++) {
        cout << dic[i] << endl;
    }
    return 0;
}