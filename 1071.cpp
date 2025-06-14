#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
 
    int A, B, maior, menor, count = 0;
    cin >> A;
    cin >> B;
    


    if(A > B) {
        maior = A;
        menor = B;
    } else {
        maior = B;
        menor = A;  

    }
    

    for(int i = menor+1; i< maior; i++){
        if(i % 2 != 0) {
            count += i;
        }
        
    }

    cout << count << endl;

    return 0;
}