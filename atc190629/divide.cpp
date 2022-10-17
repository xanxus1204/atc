#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int d[N+1];
    for (int i = 0; i < N; i++){
        cin >> d[i];
    }
    sort(d, d+N);
    int count=0;
    for(int k = 1; k <= N; k++) {
        int low = 0;
        for (int i = 0; i < N; i++) {
            if(d[i] < k){
                low++;
            }
        }
        if (low == N-low) {
            count++;
        }
    
    }
    cout << count;

}