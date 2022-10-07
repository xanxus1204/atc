#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n,w,s,e;
    for (int i=0; i<S.length(); i++) {
        if (S[i]=='N') n++;
        if (S[i]=='W') w++;
        if (S[i]=='S') s++;
        if (S[i]=='E') e++;
    }
    // 0系
    if (n == 0 and s == 0){

    }

    if (n%s == 0){
        if (w%e == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
      if (w%e == 0){
        if (n%s == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}