#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

 
int main() {
 
    long int entrada;
    cin >> entrada;
    


    for(int i = 1; i <=entrada; i++) {
        if (i % 2 == 0) {
            long int resultado = pow(i,2);
            cout << i << "^2 = " << resultado << endl;
            
        }
    }


    return 0;
}