#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
   ll N;
   cin >> N;
   vector<ll> p(N);
   for(int i =0; i<N; i++) cin >> p[i];
   ll count = 0;
   vector<ll> ps(N);
   ps = p;
   sort(p.begin(), p.end());
   for (int i = 0; i < N; i++){
      if(p[i] != ps[i]){
          count += 1;
      }
   }
   if(count == 0 || count == 2){
       cout << "YES" << endl;
   }else{
       cout << "NO" << endl;
   }

    
}