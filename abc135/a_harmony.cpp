#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll A, B;
    cin >> A >> B;
    ll K = 1;
    while (true)
    {
        if(abs(A-K) == abs (B-K)){
            cout << K << endl;
            break;
        }else{
            K++;
        }
        if(K > A && K > B){
            cout << "IMPOSSIBLE" << endl;
            break;
        }
    }
    
}