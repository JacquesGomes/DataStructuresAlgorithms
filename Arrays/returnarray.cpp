#include <iostream>

using namespace std;

int* zerar(int* b, int total){
    
    for(int i = 0; i < total;i++){
        b[i] = 0;
    }

    return b;
}

int main (){

    int a[5] = {1, 2, 3 ,4 ,5};

    int b = a[0];

    zerar(a, 5);

    cout << a[0] << " " << a[1] << " ";
    cout << b;

    return 0;
}