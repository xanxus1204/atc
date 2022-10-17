#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int V,T,S,D; cin >> V >> T >> S >> D;
    double t = double(D)/double(V);
    if (t >= T && t <= S ){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}