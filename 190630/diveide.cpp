#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(int i = 0; i < N; i++) cin >> d[i];
    sort(d.begin(), d.end());

    int answer = d[N/2] - d[N/2-1];
    cout << answer << endl;
    return 0;

}