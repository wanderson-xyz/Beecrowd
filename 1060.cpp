#include <stdio.h>
#include <iostream>
using namespace std;
 
int main() {
 
    int entrada, count;
    count =0;
    
    for(int i =0; i<5; i++){
        cin >> entrada;
        if(entrada>=0){
            count +=1;
        }
    }
 
 
 cout << count << " valores positivos" << endl;
    return 0;
}