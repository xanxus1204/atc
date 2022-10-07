#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int D,G;
    cin >> D >> G;
    vector<int> p(D);
    vector<int> c(D);
    REP(i,D) cin >> p[i] >> c[i];
    int score = 0;
    int ans = 0;
    for(int i = D; i >= 0; i--){
        for(int j = 1; j <= p[i-1]; j++){
            score = score + 100*i;
            cout << score << endl;
        }
    }
    return 0;
}