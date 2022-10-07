#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a+b == c || a+c == b || b+c == a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}