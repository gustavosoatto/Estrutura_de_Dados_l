#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    struct StackNode{
        int Entry;
        StackNode *NextNode;
    };
    StackNode *top;
public:
    Stack();
    ~Stack();
    void Push(int x);
    void Pop(int &x);
    bool Empty();
    //bool Full();
    int Size();
    void Top(int &x);
};

#endif // STACK_H