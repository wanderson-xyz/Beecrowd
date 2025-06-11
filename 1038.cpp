#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
 
int main() {


    vector<float> tabela = {4.00, 4.50, 5.00, 2.00, 1.50};
    int A, B;
    cin >> A >> B;

    float operacao = B * tabela[A-1];

    cout << "Total: R$ " << fixed << setprecision(2) << operacao << endl;

    return 0;

}