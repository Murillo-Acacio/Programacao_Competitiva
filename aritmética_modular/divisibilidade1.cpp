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

    if (f(2) == 0) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    if (f(3) == 0) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    if (f(5) == 0) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}