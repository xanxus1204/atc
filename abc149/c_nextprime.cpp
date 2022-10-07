#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
bool isPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i+=2)
    {
        if (num % i == 0){
            return false;
        }
    }

    return true;
}

int main() {
    int X; cin >> X;
    while(true){
        if (isPrime(X)){
            break;
        }else{
            X += 1;
        }
    }
    cout << X << endl;
    return 0;
}