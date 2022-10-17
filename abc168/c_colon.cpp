#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll A, B, H, M; 
    cin >> A >> B >> H >> M;
    double radH = double(H) / 12 * 360 + double(M) / 60 * 30;
    double radM = double(M) / 60  * 360;
    double degree = abs(radH - radM);
    if (degree > 180)
    {
        degree = degree - 180;
    }
    double c2 = pow(A,2.0) + pow(B, 2.0) - 2*A*B* cos(degree*M_PI/180);
    cout << setprecision(22) << sqrt(c2)   << endl;
    return 0;
}