#include<iostream>
using namespace std;

int main(){

    int entrada, pares, impares, negativos, positivos;
    pares = impares = negativos = positivos = 0;

    for(int i =0; i<5; i++){

        cin >> entrada;
        if(entrada%2 ==0){
            pares +=1;
        }

        if(entrada%2 !=0){
            impares +=1;
        }

        if(entrada < 0){
            negativos +=1;
        }
        if(entrada > 0){
            positivos +=1;
        }
    }
    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;
    


    return 0;
}