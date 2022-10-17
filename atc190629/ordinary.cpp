#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p[21];
    cin >> n;
    int i, tmp;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int count = 0;
    for (int i = 1; i < n-1; i++) {
        if (p[i-1] < p[i] and p[i] < p[i+1]) {
            count++;
        }else if(p[i-1] > p[i] and p[i] > p[i+1]) {
            count++;
        }
    }
    cout << count << endl;

}