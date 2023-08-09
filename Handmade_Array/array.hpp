#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <bits/stdc++.h>
using namespace std;

class ListaSequencial {
    private:
        int *dados;
        int capacidade;
        int tamanho;
    
    public:
        ListaSequencial(int cap);

        ~ListaSequencial();

        int push_front(int valor);
        int push_back(int valor);
        int insert(int index, int valor);
        int pop_front();
        int pop_back();
        int removeAt(int index);
        int sizeOf();
        int find(int valor);
        int deleteList();
        void sort();
        void reverse();
        void imprimirLista();
        int showAt(int index);

};

#endif