#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int calc_figure(ll num){
    int res = 0;
    while (num >= 10)
    {
        num = num / 10.0;
        res++;
    }
    res++;
    return res;

}

int main() {
    ll N; cin >> N;
    int ans = 1000000;
    int fAB = 0;
    // cout << sqrt(N) << endl;
    for(ll A = 1; A <= sqrt(N); A++){
        if( N % A == 0){
            ll B = N / A;
            int A_figure = calc_figure(A);
            int B_figure = calc_figure(B);
            fAB =  max(A_figure, B_figure);
            ans = min(ans, fAB);  
        }
    }
    cout << ans << endl;
    return 0;
}