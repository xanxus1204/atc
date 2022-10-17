#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N;
  cin >> N;
  vector<ll> A(N+1);
  vector<ll> B(N);
  for(int i = 0; i < N+1; i++) cin >> A[i];
  for(int i = 0; i < N; i++) cin >> B[i];
  ll ans = 0;
  for(int i = N; i >= 0; i--){
      if (A[i+1] - B[i] >= 0){//となりを見る話
         ans += B[i];
         B[i] = 0;
         A[i+1] -= B[i];
      }else{
          ans += A[i];
          B[i] -= A[i];
          A[i+1] = 0;
      }
       if (A[i] - B[i] >= 0){//同じindexをみる話
         ans += B[i];
         B[i] = 0;
         A[i] -= B[i];
       }else{
          ans += A[i];
          B[i] -= A[i];
          A[i] = 0;
      }
  }
  cout << ans << endl;
}