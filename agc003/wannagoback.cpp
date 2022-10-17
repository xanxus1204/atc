#include<bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    int n,w,s,e;
    for (int i=0; i<S.length(); i++) {
        if (S[i] == 'N')n++;
        if (S[i] == 'W')w++;
        if (S[i] == 'S')s++;
        if (S[i] == 'E')e++;
    }
    if (n>0 && s==0){
        cout << "No" << endl;
        return 0;
    } 
    if(s>0 && n==0){
        cout << "No" << endl;
        return 0;

    }
    if(w>0 && e==0){
        cout << "No" << endl;
        return 0;

    }
    if(e>0 && w==0){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}