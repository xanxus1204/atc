#include<bits/stdc++.h>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;
    int ans = 0;
    for (int x = 0; x <= K; x++)
    {
        for (int y = 0; y <= K; y++)
        {
           int z = S - x - y;
           if (z == K) ans++;

        }
        
    }
    cout << ans << endl;
}