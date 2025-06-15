#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int A, B, C;
    vector<int> numeros(3);

    
    cin >> A >> B >> C;
    numeros[0] = A;
    numeros[1] = B;
    numeros[2] = C;

    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < 3; i++) {
        cout << numeros[i] << endl;
    }

    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;


    return 0;
}