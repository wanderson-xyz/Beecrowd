#include<iostream>
using namespace std;

int main(){

    int entrada, count = 0;

    for(int i =0; i<5; i++){

        cin >> entrada;
        if(entrada%2 ==0){
            count +=1;
        }
    }
    cout << count << " valores pares" << endl;

    return 0;
}