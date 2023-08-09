#include <iostream>
using namespace std;

void troca (int a[]){
    a[0] = 5;
    a[1] = 3;
    a[2] = 1;
}

int main(){

    int a[5];

    a[0] = 1;
    a[1] = 1;
    a[2] = 1;

    troca (a);

    cout << a[0] << a[1] << a[2];

    return 0;
}