#include <iostream>

using namespace std;

int main (){

    int x[500];
    int y = 15;

    for(int i = 0; i < 500; i++){
        x[i] = i;
    }

    int x1 = x[0];
    int x2 = x[499];

    while (x1<=x2){
        int k = (x1+x2)/2;
        if (x[k]==y){
            cout << "YES" << endl;
            break;
        }
        cout << "Oh no!" << endl;
        if(x[k]>y) x2 = k-1;
        else x1 = k+1;
    }

    return 0;
}