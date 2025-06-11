#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    vector<int> dinheiro = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    vector<int> quantidades;

    float valorParaConverter;
    cin >> valorParaConverter;

    int valor = valorParaConverter * 100;
    


    for(int i:dinheiro){
        int quantidade = valor / i;
        quantidades.push_back(quantidade);
        valor %= i;
        
    }



    cout << "NOTAS:"<< endl;
    for(int i = 0; i < 6; i++){

        cout <<quantidades[i] << " nota(s) de R$ " << fixed << setprecision(2) << float(dinheiro[i])/100 << endl;
    }


    cout << "MOEDAS:"<< endl;

    for(int i = 6; i < 12; i++){

        cout <<quantidades[i] << " moeda(s) de R$ " << fixed << setprecision(2) << float(dinheiro[i])/100 << endl;
    }
    



    return 0;
}