#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll A,B,C;
    cin >> A >> B >> C;
    ll left = A - B;
    if (C- left > 0){
        cout << C- left;
    }else{
        cout << 0;
    }
    
    return 0;
}