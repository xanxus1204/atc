#include<bits/stdc++.h>
using namespace std;
int main() {
    int N=0, x=0;
    cin >> N >> x;
    vector<int> a(N);
    int ans = 0;
    for (int i=0; i < N; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < N; i++){
        if(i == N-1){
            if (x == a[i]) ans ++;
        }else{ 
            if(x >= a[i]){
                x -= a[i];
                ans++;
            }
        }
    }
    cout << ans;




}