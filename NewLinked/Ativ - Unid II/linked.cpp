#include "linked.hpp"
using namespace std;

ListaEncadeada::ListaEncadeada(){
    this->head = nullptr;
    this->tail = nullptr;
}

ListaEncadeada::ListaEncadeada(Node* head){
    this->head = head;
    this->tail = head;
}

ListaEncadeada::~ListaEncadeada(){
    deleteAll();
}

void ListaEncadeada::push_front(int elemento){
    
    Node* new_node = new Node(elemento);
   
   if(this->head == nullptr){
 
        this->head = new_node;
        this->tail = new_node;
    }

    else{
        new_node->setNext(this->head);
        this->head = new_node;
    }

}

void ListaEncadeada::push_back(int elemento){
    
    Node* new_node = new Node (elemento);

    if(this->tail == nullptr){
        tail = new_node;
    }
    else{
        this->tail->setNext(new_node);
        tail = new_node;
    }
}

void ListaEncadeada::pop_front(){

    if (head == nullptr){
        cout << "A lista está vazia." << endl;
        return;
    }

    Node* nodeRemovido = head;
    head = head->getNext();
    delete nodeRemovido;

    if(head == nullptr){
        tail = nullptr;
    }
}

void ListaEncadeada::pop_back(){

    if (tail == nullptr){
        cout << "A lista está vazia." << endl;
        return;
    }

    if(head == tail){
        delete tail;
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    Node* nodeAnterior = head;
    while(nodeAnterior->getNext() != tail){
        nodeAnterior = nodeAnterior->getNext();
    }

    delete tail;
    tail = nodeAnterior;
    tail->setNext(nullptr);

}

void ListaEncadeada::printAll(){
    Node* current = head;

    if(head == nullptr){
        cout << "A lista está vazia." << endl;
        return;
    }

    cout << "Todos os elementos da lista: ";
    while(current != nullptr){

        cout << current->getElement() << " ";
        current = current->getNext();

    }
    cout << endl;

}

void ListaEncadeada::remove(int elemento){
    Node* current = head;
    Node* previous = nullptr;

    while(current != nullptr){
        if(current->getElement() == elemento){
            if(previous == nullptr){
                head = current->getNext();
                if(current == tail){
                    tail = nullptr;
                }
            } else{
                previous->setNext(current->getNext());
                if(current == tail){
                    tail = previous;
                }
            }

            delete current;

            cout << "Nova lista sem o elemento " << elemento << " : ";
            printAll();
            return;

        }

        previous = current;
        current = current->getNext();
    }

    cout << "O elemento " << elemento << " não foi encontrado na lista." << endl;

}

void ListaEncadeada::sizeOf(){
    int count = 0;
    Node* current = head;

    while(current != nullptr){
        count++;
        current = current->getNext();
    }

    cout << "Tamanho da lista: " << count << endl;
}

bool ListaEncadeada::find(int valor){
    
    Node* current = head;

    while(current != nullptr){
        if(current->getElement() == valor){
            return true;
        }

        current = current->getNext();
    }

    return false;    
}


void ListaEncadeada::deleteAll(){
    Node* current = head;
    while(current != nullptr){
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    head = nullptr;
}