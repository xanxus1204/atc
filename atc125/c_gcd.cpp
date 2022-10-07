#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
unsigned euclidean_gcd(ll a, ll b) {
  if(a < b) return euclidean_gcd(b, a);
  ll r;
  if (a == 0) return b;
  if (b == 0) return a;

  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}
int main() {
    ll N; cin >> N;
    vector<ll> A(N);
    REP(i,N)cin  >>  A[i];
    vector<ll> L(N); L[0] = 0;
    vector<ll> R(N+1); R[N+1] = 0;
    vector<ll> M(N);
    for(int i = 0; i <= N; i++){
        L[i+1] = euclidean_gcd(L[i], A[i]);
        R[i] = euclidean_gcd(R[i+1],A[i]);
        M[i] = euclidean_gcd(L[i], R[i+1]);
    }
    REP(i,N) cout << M[i] << endl;


    return 0;
}