#include<bits/stdc++.h>
using namespace std;

int n, m, k, aux, p1, p2;
vector<int> d, a;

int main() {

    cin >> n >> m >> k;

    for (int i=0; i<n; i++) {
        cin >> aux;
        d.push_back(aux);
    }
    for (int i=0; i<m; i++) {
        cin >> aux;
        a.push_back(aux);
    }
    aux = 0;
    sort(d.begin(), d.end());
    sort(a.begin(), a.end());

    for (int i=0, j=0; i<n; i++) {
        while (j<m && a[j] < d[i]-k) {
            j++;
        }
        if (j == m) {
            continue;
        }
        if (a[j] <= d[i]+k) {
            aux++;
            j++;
        }
    }
    cout << aux << endl;

    return 0;
}