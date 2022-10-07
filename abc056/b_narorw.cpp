#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int W,a,b;
    cin >> W >> a >> b;
    if(b+W < a){
        cout << a- (b+W);
    }else if(b > a+W){
        cout << b - (a+W);

    }else{
        cout << 0;
    }
    return 0;
}