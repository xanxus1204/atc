#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
ll euclidean_gcd(ll a, ll b) {
  if(a < b) return euclidean_gcd(b, a);
  ll r;
  
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}
ll gcd(ll a, ll b)
{
	if (a%b==0)
	{
		return(b);
    }
	else
	{
		return(gcd(b,a%b));
    }
}

int main() {
    ll N,X;
    cin >> N >> X;
    vector<ll> x(N); 
    REP(i,N) cin >> x[i];
    ll D = abs(X-x[0]);
    REP(i,N){
        ll dist = abs(X-x[i]);
        D = gcd(dist, D);

    }
    cout << D << endl;
    
    return 0;
}