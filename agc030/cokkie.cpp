#include<bits/stdc++.h>
using namespace std;
 
 int main(){
     int A, B, C;
     int ans = 0;
     cin >> A >> B >> C;
     if (A <= C){
         ans = A;
     }else{
         ans = C;
     }
     ans = ans + B + 1;
     cout << ans << endl;
 }