#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    vector<int> a(N+1);
    for(int i = 0; i < N; i++) cin >> a[i+1];
    vector<int> b(N+1);


    for(int i = N; i >= 1; i--){
        int sum = 0;
        for(int j = i+i; j <= N; j += i){
            sum += b[j];
        }
        if (sum%2 == a[i]){
            b[i] = 0;
        }else{
            b[i] = 1;
        }
    }
    
    int M = 0;
    for (int i = 0; i < b.size(); i++){
        if(b[i] == 1) M++;
    }
    bool flag = true;

    for (int i = 0; i < N; i++) {
        
        if (b[i+1] == 1){
            if(flag){
                 cout << M << endl;
                 flag = false;
            }
            cout << i+1 << " ";
        }
    }

    if(flag) cout << 0;

}