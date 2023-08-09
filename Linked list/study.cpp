#include <iostream>

using namespace std;

int main (){

    int x = 903;
    int contador = 0;

    for (int i=0; i<903; i++){
        if (x%3==0){
            contador++;
        }
        x--;

    }
    cout << x << endl;
    cout << contador << endl;
}