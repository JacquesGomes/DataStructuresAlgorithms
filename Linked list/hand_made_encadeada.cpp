#include <iostream>
using namespace std;

class Node{
    private:
        int element;
        Node* next;

    public:

        Node (int element){ //constructor inicializing the node. "this" is used to diferentiate the local variable from the object one
            this-> element = element;
            this->next = NULL;
        }

        //methods:

        int getElement(){
            return element;
        }

        Node* getNext(){
            return next;
        }

        void setNext(Node* p){
            next = p;
        }

    
};

class List{
    private:
        Node* head;
        Node* tail;

    public:

        void menu();
        void action (int);

        List(){
            head = NULL;
            tail = NULL;
            menu();
        }

        List (int v){
            head = new Node(v);
            tail = head;
            menu();
        }

        virtual ~List(){
            delete head;
        }

        void show(){
            cout << "\nAll elements: " << endl;
            Node* c = head;

            if(empty()){
                cout << "The list is empty.\n\n";
            }
            else{
                while(c){
                    cout << c->getElement() << endl;
                    c = c->getNext();
                }
                cout << endl;
            }
        }

        bool empty(){ //checks if the list is empty
            return(head == NULL);
        }

        void insert_head(int v){
            Node* new_node = new Node(v);

            if(empty()){
                head = new_node;
                tail = new_node;
            }
            else{
                new_node->setNext(head);
                head = new_node;
            }
        }

        void insert_tail(int v){
            Node* new_node = new Node(v);

            if(empty()){
                head = new_node;
                tail = new_node;
            }
            else{
                tail->setNext(new_node);
                tail = new_node;
            }
        }



        int getSize (){

            if(empty()){
                return 0;
            }

            Node* c = head;

            int size = 0;

            do{

                c = c->getNext();
                size++;

            } while (c);

            return size;

        }

        bool checkElement(int v){

            Node* c = head;

            while(c){
                if(c->getElement() == v){
                    return true;
                }
                c = c->getNext();
                
            }
            return false;
        }

        void remove(){ //Remove tail
            
            if(!empty()){
                if(head->getNext()==NULL){
                    head = NULL;
                }
                else if (getSize()==2){
                    head->setNext(NULL);
                }
                else if(head->getNext()->getNext()==NULL){
                    head->setNext(NULL);
                }
                else{
                    Node* temp1 = head;
                    Node* temp2 = head->getNext();
                    Node* temp3 = head->getNext()->getNext();

                    while(temp3){
                        Node* aux = temp2;
                        temp2 = temp3;
                        temp1 = aux;
                        temp3 = temp3->getNext();
                    }
                    delete temp1->getNext();
                    temp1->setNext(NULL);
                    tail = temp1;
                }
            }
        }

};

void List::menu(){

    int op = 0;

    do{
        cout << "0. Quit"<<endl;
        cout << "1. Show All List Elements"<<endl;
        cout << "2. Check if the list is empty"<<endl;
        cout << "3. Check if Certain Element is in the List" << endl;
        cout << "4. Show List Size" <<endl;
        cout << "5. Insert Element at Tail Position" << endl;
        cout << "6. Insert Element at Head Position" << endl;
        cout << "7. Show List Head" << endl;
        cout << "8. Show List Tail" <<endl;
        cout << "9. Delete List Tail" <<endl;
        cout << endl;
        cout << "Print the operation of your choice: ";

        /*//Check if Certain Element is in the List
        //Insert Element at Head Position
        //Insert Element at Tail position
        //Delete Last Element*/
        cin >> op;
        action (op);

    } while (op);

}



void List::action(int op){
    switch(op){

        case 0:
            cout  << "Bye bye.\n";
            break;

        case 1:
            show();
            break;

        case 2:

            if(empty()==1){
                cout << "\nThe list is empty" <<"\n\n";
            }
            else{
                cout << "\nThe list isnt empty" << "\n\n";
            }
            break;

        case 3:
            int check;
            cout << "\nInsert the number you want to check: ";
            cin >> check;

            if((checkElement(check)) == true){
                cout << "\nYes, the number '" <<check << "' is on the list" << "\n\n";
            }
            else {
                cout << "\nNo, the number '" << check << "' isn't on the list" <<"\n\n";
            }
            break;

        case 4:
            int size_int;
            size_int = getSize();

            cout << "\nThe list size is: " << size_int <<"\n\n";
            break;

        case 5:

            int tail_number;
            cout << "\nInsert the number you want to insert at the tail position: ";
            cin >> tail_number;

            insert_tail (tail_number);
            cout << "\nHere is the list new tail: " << tail->getElement() << "\n\n";
            break;

        case 6:

            int head_number;
            cout << "\nInsert the number you want to insert at the head position: ";
            cin >> head_number;

            insert_head (head_number);
            cout << "\nHere is the list new head: " << head->getElement() << "\n\n";
            break;
            
        case 7:

            cout << "\nHere is the list head: " << head->getElement() << "\n\n";
            break;

        case 8:

            cout << "\nHere is the list tail: " << tail->getElement() << "\n\n";
            break;

        case 9:

            remove();
            if(empty()!=1){
                cout << "\nHere is the list new tail: " << tail->getElement() << "\n\n";
                break;
            }
            else{
                cout << "\nThe list is empty\n\n";
            }

            break;

        default:

            cout<< "Invalid Option." <<endl;
    }
}

int main(){

    List chain;

    return 0;
}