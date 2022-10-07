#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll X,A,B;
    cin >> X >> A >> B;
    if(B-A <= 0){
        cout << "delicious";
    }else{
        if(B-A <= X){
            cout << "safe";
        }else{
            cout << "dangerous";
        }
    }
    return 0;
}