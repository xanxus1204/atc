#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    bool flag = false;
    if (S[0] == S[1] and S[2] == S[3]){
        if (S[1] == S[2]) {
            flag = false;
        }else{
            flag = true;
        }
        
    }else if (S[0] == S[2] and S[1] == S[3]){
        flag = true;
    }else if (S[0] == S[3] and S[1] == S[2]){
        flag = true;
    }
    if (flag){
        cout << "Yes";
    }else {
        cout << "No"; 
    }
}