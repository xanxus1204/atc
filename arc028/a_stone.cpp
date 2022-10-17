#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int N,A,B; cin >> N >> A >> B;
    int turn = 0;
    while (N > 0)
    {
        if (turn == 0) {
            N = N - A;
            turn = 1;
        }else{
            N = N - B;
            turn = 0;
        }
        if (N < 0) break;
    }
    if (turn == 0){
        cout << "Bug" << endl;
    }else{
        cout << "Ant" << endl;
    }
    return 0;
}