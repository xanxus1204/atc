#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    string S;
    cin >> S;
    vector<ll> child(S.length());
    for(int i = 0; i < S.length(); i++) child[i] = 1;

    ll end = 0;
    while(end < 5){
        for(int i = 0; i < S.length(); i++){
            if (S[i] == 'R'){
                if (child[i] > 0){
                    child[i] -= 1;
                    child[i+1] += 1;
                }
            }else if (S[i] == 'L'){
                if (child[i] > 0){
                    child[i] -= 1;
                    child[i-1] += 1; 
                }
            }
        }
        end++;
        for(int i = 0; i < S.length(); i++) cout << child[i] << " ";
        cout << endl;


    }

    
    return 0;
}