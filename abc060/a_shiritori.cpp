#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    string A,B,C;
    cin >> A >> B >> C;
    if (A.back() == B.front() && B.back() == C.front()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}