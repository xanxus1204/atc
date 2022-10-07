#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int next_number(char c){
    if (c == 'a'){
        return 0;
    }else if (c == 'b'){
        return 1;
    }else{
        return 2;
    }
}

int main() {
    string Sa, Sb, Sc;
    cin >> Sa >> Sb >> Sc;
    int next = 0; 
    // 0-a 1-b 2-c
    while (true)
    {
        if(next == 0){
            if (Sa.length() == 0){
                cout << 'A' << endl;
                break;
            } 
            next = next_number(Sa[0]);
            Sa.erase(Sa.begin());
        }else if (next == 1){
            if (Sb.length() == 0){
                cout << 'B' << endl;
                break;
            }
            next = next_number(Sb[0]);
            Sb.erase(Sb.begin());
        }else {
            if (Sc.length() == 0){
                cout << 'C' << endl;
                break;
            }
            next = next_number(Sc[0]);
            Sc.erase(Sc.begin());
        }
        // cout << Sa << endl;
        // cout << Sb << endl;
        // cout << Sc << endl;
        // cout << endl;
    }

    return 0;
}
