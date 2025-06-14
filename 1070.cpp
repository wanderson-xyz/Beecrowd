#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
 
    int entrada;
    cin >> entrada;
    


    if(entrada % 2 == 0) {
        entrada += 1; // If even, start with the next odd number

    }
    

    for(int i =0; i<12; i+=2){
        cout << entrada + i << endl;
    }

    return 0;
}