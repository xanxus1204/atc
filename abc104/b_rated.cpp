#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int R;
    cin >> R;
    if (R < 1200){
        cout << "ABC" ;
    }else if(R < 2800){
        cout << "ARC";
    }else{
        cout << "AGC";
    }
    return 0;
}