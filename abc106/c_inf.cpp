#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string S;
    ll K; 
    cin >> S;
    cin >> K;
    for(ll i=0; i < S.length(); i++){
        if((int)S[i] != 1){
            cout << S[i];
            return 0;
        }
    }
    cout << '1';
    return 0;
}