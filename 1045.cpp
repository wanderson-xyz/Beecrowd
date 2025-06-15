#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;


int main(){


float A;

vector<float> lista(3);
for (int i = 0; i < 3; i++) {
    cin >> A;
    lista[i] = A;

}

sort(lista.begin(), lista.end(), greater<float>());

if(lista[0] >= lista[1] + lista[2]) {
    cout << "NAO FORMA TRIANGULO" << endl;
} else {
    if (pow(lista[0], 2) == pow(lista[1], 2) + pow(lista[2], 2)) {
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (pow(lista[0], 2) > pow(lista[1], 2) + pow(lista[2], 2)) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if (lista[0] == lista[1] && lista[1] == lista[2]) {
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (lista[0] == lista[1] || lista[1] == lista[2] || lista[0] == lista[2]) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
}