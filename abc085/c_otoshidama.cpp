#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N;
    ll Y;
    cin >> N >> Y;
    for(int x = 0; x <= N; x++){
        for(int y = 0; y <= N; y++){
            int z = N-x-y;
            if (z < 0) continue;
            if(10000*x+5000*y+1000*z == Y){
                cout << x << " " << y << " " << z;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1;
    return 0;
}