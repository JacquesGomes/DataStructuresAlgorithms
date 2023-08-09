#include "array.hpp"

using namespace std;

ListaSequencial::ListaSequencial(int cap){
    this->capacidade = cap;
    this->dados = new int[capacidade];
    this->tamanho = 0;
}

ListaSequencial::~ListaSequencial(){
    delete[] this->dados;
}

int ListaSequencial::push_front(int valor){
    if(this->capacidade == this->tamanho){
        return -1;
    }

    for(int i= tamanho; i>0; i--){
        this->dados[i] = this->dados[i-1];
    }

    this->dados[0] = valor;

    this->tamanho++;
    return 1;
}


int ListaSequencial::push_back(int valor){
    if(this->capacidade == this->tamanho){
        return -1;
    }

    this->dados[tamanho] = valor;

    this->tamanho++;
    return 1;
}


int ListaSequencial::insert(int index, int valor){
    if(this->capacidade == this->tamanho || index < 0 || index > this->tamanho){
        return -1;
    }

    for (int i = this->tamanho; i > index; i--) {
        this->dados[i] = this->dados[i-1];
    }

    this->dados[index] = valor;
    this->tamanho++;
    return 1;
}


int ListaSequencial::pop_front(){
    if(this->tamanho == 0){
        return -1;
    }

    for(int i = 0; i < this->tamanho-1; i++){
        this->dados[i] = this->dados[i+1];
    }

    tamanho--;
    return 1;
}


int ListaSequencial::pop_back(){
    if(this->tamanho == 0){
        return -1;
    }

    tamanho--;
    return 1;
}

int ListaSequencial::removeAt(int index){
    if(index < 0 || index >= this->tamanho || this->tamanho == this->capacidade){
        return -1;
    }

    for(int i = index; i < this->tamanho-1; i++){
        this->dados[i] = this->dados[i+1];
    }

    tamanho--;
    return 1;
}


int ListaSequencial::sizeOf(){
    return this->tamanho;
}


int ListaSequencial::find(int valor){
    for(int i = 0; i < this->tamanho; i++){
        if(this->dados[i] == valor){
            return i;
        }
    }
    return -1;
}


int ListaSequencial::deleteList(){
    if(tamanho == 0){
        return 0;
    }

    delete[] this->dados;
    dados = new int[this->capacidade];
    tamanho = 0;
    return 1;

}


void ListaSequencial::sort(){
    bool trocou;
    for(int i = 0; i < this->tamanho-1;i++){
        trocou = false;
        int temp;

        for(int j = 0; j < this->tamanho - i - 1; j++){
            if(this->dados[j] > this->dados[j+1]){
                temp = this->dados[j];
                this->dados[j] = this->dados[j+1];
                this->dados[j+1] = temp;
                trocou = true;
            }
        }
        if(!trocou){
            break;
        }

    }
}


void ListaSequencial::reverse(){
    bool trocou;
    for(int i = 0; i < this->tamanho-1;i++){
        trocou = false;
        int temp;

        for(int j = 0; j < this->tamanho - i - 1; j++){
            if(this->dados[j] < this->dados[j+1]){
                temp = this->dados[j];
                this->dados[j] = this->dados[j+1];
                this->dados[j+1] = temp;
                trocou = true;
            }
        }
        if(!trocou){
            break;
        }

    }
}

void ListaSequencial::imprimirLista(){
    for(int i=0; i<this->tamanho; i++){
        cout << this->dados[i] << " ";
    }
    cout << endl;
}

int ListaSequencial::showAt(int index){
    if(index == -1){
        return this->dados[tamanho-1];
    }

    return this->dados[index];

}

