#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {

    float A, B;

    cin >> A >> B;
    if (A == 0 && B == 0) {
        cout << "Origem" << endl;
    } else if (A == 0) {
        cout << "Eixo Y" << endl;
    } else if (B == 0) {
        cout << "Eixo X" << endl;
    } else if (A > 0 && B > 0) {
        cout << "Q1" << endl;
    } else if (A < 0 && B > 0) {
        cout << "Q2" << endl;
    } else if (A < 0 && B < 0) {
        cout << "Q3" << endl;
    } else {
        cout << "Q4" << endl;
    }
    
    return 0;
}