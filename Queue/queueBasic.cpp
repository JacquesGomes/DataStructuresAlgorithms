#include <bits/stdc++.h>

using namespace std;

int main(){

    queue<int> fila;
    fila.push(10);
    fila.push(5);
    fila.push(5);
    fila.push(2);
    cout << fila.front();
    fila.pop();
    cout << fila.back();
    cout << fila.front();

    return 0;
}