#include<bits/stdc++.h>
using namespace std;

int n, m;
string s;

int f(int m) {
    int n = 0;
    for (int i=0; i<s.size(); i++) {
        int pot = ((10%m * n%m)%m);
        n = (pot%m + (s[i]-'0')%m)%m;
    }
    return n;
}

int main() {
    cin >> s;

    if (f(11) == 0) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}