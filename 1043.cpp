#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {

    float A, B, C;

    cin >> A >> B >> C;
   
    if (A + B > C && A + C > B && B + C > A) {
        float perimetro = A + B + C;
        cout << "Perimetro = " << perimetro << endl;
    } else {
        float area = (A + B) * C / 2.0;
        cout << "Area = " << area << endl;
    }



    
    return 0;
}