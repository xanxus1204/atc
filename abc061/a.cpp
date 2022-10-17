#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    ll A,B,C;
    cin >> A >> B >> C;
    if(C >= A && C <= B){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}