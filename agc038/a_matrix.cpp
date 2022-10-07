#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
int main() {
    int H,W,A,B;
    cin >> H >> W >> A >> B;
    vector<vector<int>> mat(H,vector<int>(W));
    REP(i,H){
        REP(j,W){
            if(i < B && j < A){
                mat[i][j] = 0;
            }else if(i >= B && j >= A){
                mat[i][j] = 0;
            }else{
                mat[i][j] = 1;
            }
        }
    }

    REP(i,H){
        REP(j,W){
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}