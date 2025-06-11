#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
 
int main() {


    vector<int> tabela = {2, 3, 4, 1};
    float A, B, C, D, E;
    cin >> A >> B >> C >> D;

    float operacao = (A * 2 + B * 3 + C * 4 + D)/10;

    if (operacao >=7) {
        cout << "Media: " << fixed << setprecision(1) << operacao << endl;
        cout << "Aluno aprovado." << endl;
    }

    if (operacao <5) {
        cout << "Media: " << fixed << setprecision(1) << operacao << endl;
        cout << "Aluno reprovado." << endl;
    }

    if (operacao >=5 && operacao <7) {
        cin >> E;
        cout << "Media: " << fixed << setprecision(1) << operacao << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << fixed << setprecision(1) << E << endl;

        operacao = (operacao + E)/2;

        if (operacao >= 5) {
            cout << "Aluno aprovado." << endl;
        }
        if (operacao < 5) {
            cout << "Aluno reprovado." << endl;
        }
    
        cout << "Media final: " << fixed << setprecision(1) << operacao << endl;

    }

    return 0;

}