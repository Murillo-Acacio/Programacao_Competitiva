#include<bits/stdc++.h>
using namespace std;

int main() {

    char* lista[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int aux, soma = 0;

    for (int i=0; i<9; i++){
        cin >> aux;
        soma += aux;
    }

    aux = soma/9;
    if (aux*9 == soma) {
        soma = 9;
    }
    else {
        soma -= aux*9;
    } 

    cout << lista[soma-1] << endl;

    return 0;
}