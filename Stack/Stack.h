/*
Implementing stack with array

Pros: easy to implement.
Cons: It is no dynamic. Cannot change size at runtime
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
    int top;

public:
    int a[MAX]; //Maximum size
    
    Stack() {top = -1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x){
    if (top >= (MAX - 1)){
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop(){
    if (top < 0){
        cout << "Stack Underflow";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}