#include <iostream>
#include <string>

using namespace std;


int main (){
    
    char array[2][26] = {{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}, {'1','2','3','4','5','8','3','5','1','1','2','3','4','5','7','8','1','2','3','4','6','6','6','5','1','7'}};

    char str[100];
    cout << "Enter your name: ";
    cin.getline(str,100);

    int resultado = 0;

    for (int i=0; str[i] != '\0'; i++){
        if (str[i] >= 65 && str[i] <= 90){
            int index = str[i] - 65;
            resultado = resultado + (array[1][index] - '0');
        }
    

        else{
            resultado = -1;
            break;
        }

    }

    if (resultado == -1){
        cout << "Número inválido" << endl;
    }
    else{
        cout << "O número de " << str << " é: " << resultado << endl;
    }
    return 0;
}