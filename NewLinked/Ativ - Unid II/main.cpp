#include <bits/stdc++.h>
#include "linked.hpp"

using namespace std;

int main(){

    ListaEncadeada lista;

    int opcao;
    int valor;

    while (true){
        cout << "Menu:\n";
        cout << "1. Adicionar elemento no início\n";
        cout << "2. Adicionar elemento no final\n";
        cout << "3. Remover elemento do início\n";
        cout << "4. Remover elemento do final\n";
        cout << "5. Imprimir todos os elementos\n";
        cout << "6. Remover elemento específico\n";
        cout << "7. Verificar se um elemento existe\n";
        cout << "8. Excluir todos os elementos\n";
        cout << "9. Imprimir tamanho atual da lista\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
                case 1:
                    cout << "Digite o valor a ser adicionado no início: ";
                    cin >> valor;
                    lista.push_front(valor);
                    break;
                case 2:
                    cout << "Digite o valor a ser adicionado no final: ";
                    cin >> valor;
                    lista.push_back(valor);
                    break;
                case 3:
                    lista.pop_front();
                    break;
                case 4:
                    lista.pop_back();
                    break;
                case 5:
                    lista.printAll();
                    break;
                case 6:
                    cout << "Digite o valor a ser removido: ";
                    cin >> valor;
                    lista.remove(valor);
                    break;
                case 7:
                    cout << "Digite o valor a ser verificado: ";
                    cin >> valor;
                    if (lista.find(valor)) {
                        cout << "O elemento existe na lista.\n";
                    } else {
                        cout << "O elemento não existe na lista.\n";
                    }
                    break;
                case 8:
                    lista.deleteAll();
                    break;
                case 9:
                    lista.sizeOf();
                    break;
                case 0:
                    cout << "Saindo do programa...\n";
                    return 0;
                default:
                    cout << "Opção inválida. Tente novamente.\n";
                    break;
            }
            }

    return 0;
}