#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<string> W(N);
    REP(i, N) cin >> W[i];
    unordered_map<string, int> S;
    REP(i, N){
        if (i < N-1){
            if(W[i].back() != W[i+1].front()){
                cout << "No" << endl;
                return 0;
            }

        }

        if (S[W[i]] == 0){
            S[W[i]] = 1;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}