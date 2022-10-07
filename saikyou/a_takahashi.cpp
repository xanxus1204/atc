#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int M,D;
    cin >> M >> D;
    int ans;
    for (int m = 1; m <= M; m++){
        for(int j = 22; j <=D; j++){
            int d1 = j % 10;
            int d2 = (j - d1) / 10;
            if (d1 >= 2 && d2 >= 2 && d1*d2 == m){
                ans++;
            }
        }
    }
    cout << (ans) << endl;
    return 0;
}