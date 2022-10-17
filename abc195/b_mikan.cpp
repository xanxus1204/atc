#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int A,B,W; cin >> A >> B >> W;
    W *= 1000;
    int min_num = ceil(W / double(B));
    int max_num = floor(W / double(A));

    if (min_num > max_num) {
        cout << "UNSATISFIABLE" << endl;
        return 0 ;
    }
    cout << min_num << " " << max_num << endl;


    



    return 0;
}