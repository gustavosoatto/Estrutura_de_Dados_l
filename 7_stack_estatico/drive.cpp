#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
    Stack pilha1;

    pilha1.Push(1);
    pilha1.Push(3);
    pilha1.Push(5);

    int y = 0;
    pilha1.Pop(y);
    cout << "Valor retirado: " << y << endl;

    int x = 0;
    pilha1.Top(x);
    cout << "Valor no topo: " << x << endl;
}
