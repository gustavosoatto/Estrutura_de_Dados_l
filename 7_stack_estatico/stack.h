#ifndef STACK_H
#define STACK_H

const int MaxElements = 100;
class Stack
{
private:
    int top;
    int Entry[MaxElements];
public:
    Stack();
    ~Stack();
    void Push(int x);
    void Pop(int &x);
    void Top(int &x);
    bool Full();
    bool Empty();
    int Size();
};
#endif