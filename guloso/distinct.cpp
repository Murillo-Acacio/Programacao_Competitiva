#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> num;
    int n, x;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x;
        num.insert(x);
    }

    cout << num.size() << endl;

    return 0;
}
