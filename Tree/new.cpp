#include <bits/stdc++.h>

using namespace std;

class Node{
    private:
        int data;
        Node *left;
        Node *right;

    public:
        Node(int x) : data(x), left(NULL), right(NULL) {}

        friend class BinaryTree;
};

class BinaryTree{
    private:
        Node *root;

        void addNode(Node *node, int data){
            if(node->data > data){
                if(node->left == NULL){
                    node->left = new Node(data);
                } else{
                    addNode(node->left, data);
                }
            } else{
                if(node->right == NULL){
                    node->right = new Node(data);
                } else{
                    addNode(node->right, data);
                }

            }
        }
    
    public:
        BinaryTree(){
            root = NULL;
        }

        void insert(int data){
            if(root == NULL){
                root = new Node(data);
            } else{
                addNode(root, data);
            }
        }

        void traverseInorder(Node *node){
            if(node != NULL){
                traverseInorder(node->left);
                cout << node->data << " ";
                traverseInorder(node->right);
            }
        }

        void traversePreorder(Node *node){
            if(node != NULL){
                cout << node->data << " ";
                traversePreorder(node->left);
                traversePreorder(node->right);
                }
        }

        void traversePostorder(Node *node){
            if(node != NULL){
                traversePostorder(node->left);
                traversePostorder(node->right);
                cout << node->data << " ";
            }
        }

        void traverseLevelorder(){
            if(root == NULL){
                return;
            }
            queue<Node *> q;
            q.push(root);
            while(!q.empty()){
                Node *node = q.front();
                q.pop();
                cout << node->data << " ";
                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
        }

        Node* getRoot(){
            return root;
        }
};

int main(){

    BinaryTree tree;
    int n, data;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " values: ";
    for(int i=0; i<n; i++){
        cin >> data;
        tree.insert(data);
        }
    cout << "Inorder traversal: ";
    tree.traverseInorder(tree.getRoot());
    cout << endl;

    cout << "Preorder traversal: ";
    tree.traversePreorder(tree.getRoot());
    cout << endl;

    cout << "Postorder traversal: ";
    tree.traversePostorder(tree.getRoot());
    cout << endl;

    cout << "Levelorder traversal: ";
    tree.traverseLevelorder();
    cout << endl;


    return 0;
}