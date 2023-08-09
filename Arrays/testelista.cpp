#include <iostream>

using namespace std;

int main (){

    int lista[50];

    lista[0] = 1;
    lista [1] = 2;

    cout << lista << endl;


    cout << *(lista) << endl;
    cout << lista + 1 << endl;
    cout << *(lista + 1) << endl;

    cout << endl;

    cout << lista[0] << endl;
    cout << lista[1] << endl;

    return 0;
}