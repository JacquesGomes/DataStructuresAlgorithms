#include <bits/stdc++.h>
#include "array.hpp"

using namespace std;

int main(){

    ListaSequencial lista(10);
    int opcao, elemento, index, size, returned;
    while (opcao != 14){

        cout << endl;
        cout << "1 - Insert at front\n2 - Insert at the end\n3 - Insert at index\n4 - Pop front\n5 - Pop back\n6 - Pop at index\n7 - Tamanho atual da lista\n8 - Encontrar elemento\n9 - Mostrar elemento pelo index\n10 - Deletar lista\n11 - Imprimir lista\n12 - Ordenar lista de forma crescente\n13 - Ordenar lista de forma decrescente\n14 - Sair\n";
        cin >> opcao;

        switch(opcao){
            case 1:

                cout << endl << "Informe o número: ";
                cin >> elemento;
                lista.push_front(elemento);
                returned = lista.showAt(0);
                cout << "Novo elemento no front: " << returned << endl;
                break;
            case 2:
                cout << endl << "Informe o número: ";
                cin >> elemento;
                lista.push_back(elemento);
                returned = lista.showAt(-1);
                cout << "Novo elemento no back: " << returned << endl;
                break;
            case 3:
                cout << endl << "Informe o index e o número: ";
                cin >> index >> elemento;
                lista.insert(index, elemento);
                returned = lista.showAt(index);
                cout << "Novo elemento no index " << index << ": " << returned << endl;
                break;
            case 4:
                lista.pop_front();
                returned = lista.showAt(0);
                cout << "Novo elemento no front: " << returned << endl;
                break;
            case 5:
                lista.pop_back();
                returned = lista.showAt(-1);
                cout << "Novo elemento no back: "<< returned << endl;
                break;
            case 6:
                cout << endl << "Informe o index: ";
                cin >> index;
                lista.removeAt(index);
                returned = lista.showAt(index);
                cout << "Novo elemento no index "<< index << ": " << returned << endl;
                break;
            case 7:
                size = lista.sizeOf();
                cout << "O tamanho atual da lista é: " << size << endl;
                break;
            case 8:
                cout << endl << "Informe o elemento: ";
                cin >> elemento;
                returned = lista.find(elemento);
                cout << "Elemento " << elemento << " encontrado no index: " << returned << endl;
                break;

            case 9:
                cout << endl << "Informe o index: ";
                cin >> index;

                returned = lista.showAt(index);
                cout << "O elemento no index " << index << " é: " << returned << endl;
                break;
            case 10:
                lista.deleteList();
                break;
            case 11:
                lista.imprimirLista();
                break;
            
            case 12:
                lista.sort();
                cout << "A lista ordenada de forma crescente é: ";
                lista.imprimirLista();
                break;

            case 13:
                lista.reverse();
                cout << "A lista ordenada de forma decrescente é: ";
                lista.imprimirLista();
                break;

            case 14:
                cout << "Bye bye" << endl;
                break;

            default:
                cout << "Opcao invalida." << endl;
        }
}

    return 0;
}
