#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack(){
    top = NULL;
}

bool Stack::Empty(){
    return top == NULL;
}

void Stack::Push(int x){
    StackNode *p;
    p = new StackNode;
    if(p==NULL) {
        cout << "Pilha cheia!" << endl;
        return;
    }
    p->Entry = x;
    p->NextNode = top;
    top = p; 
}

void Stack::Top(int &x){
    x = top->Entry;
}

void Stack::Pop(int &x){
    StackNode *p;
    if(Empty()) {
        cout << "Pilha vazia!" << endl;
        return;
    }
    p = top;
    x = top->Entry;
    top = top->NextNode;
    delete p;
}

int Stack::Size(){

}

Stack::~Stack(){

}