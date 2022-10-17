#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll N;
    cin >> N;
    vector<ll> H(N);
    for (int i = 0; i < N; i++) cin  >> H[i];

    ll maxnum = 0;
    for (int i = 1; i < N; i++){
        if (H[i] < H[i-1]){
            if(H[i-1] - 1 == H[i]){
                H[i-1] -= 1;
                maxnum = max(maxnum, H[i-1]);
                if(H[i] < maxnum){
                    cout << "No";
                    return 0;
                }
            }else{
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    
    return 0;
}