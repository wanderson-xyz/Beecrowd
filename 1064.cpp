#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    float entrada, count, soma;
    count =0;
    soma = 0;
    
    for(int i =0; i<6; i++){
        cin >> entrada;
        if(entrada>=0){
            count +=1;
            soma += entrada;
        }
    }
 
 
 cout << count << " valores positivos" << endl;
 cout << fixed << setprecision(1) << soma/count << endl;
    return 0;
}