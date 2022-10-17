#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

void func(ll N, ll cur, int use, ll &counter) {
    if(cur > N) return;
    if (use == 0b111) counter++;

    func(N, cur*10 + 7, use | 0b001, counter);
    func(N, cur * 10 + 5, use | 0b010, counter);
    func(N, cur * 10 + 3, use | 0b100, counter);
}
int main() {
    ll N;
    cin >> N;
    ll counter = 0;
    func(N, 0, 0, counter);
    cout << counter << endl;
    return 0;
}