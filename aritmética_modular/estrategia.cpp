#include<bits/stdc++.h>
using namespace std;

int main() {

    int j, r, aux, ponto=0, mvp=0;
    cin >> j >> r;

    int lista[j];

    for (int i=0; i<j; i++) {
        lista[i] = 0;
    }

    for (int i=0; i<r; i++) {
        for (int k=0; k<j; k++) {
            cin >> aux;
            lista[k] += aux;
            if (lista[k] >= ponto && aux > 0) {
                ponto = lista[k];
                mvp = k+1;
            }
        }
    }

    cout << mvp << endl;

    return 0;
}