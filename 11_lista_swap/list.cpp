#include "list.h"
#include <iostream>
using namespace std;

List::List()
{
    count = 0;
    head = NULL;
}
List::~List()
{
    ListPointer q;
    while (head != NULL)
    {
        q = head;
        head = head->NextNode;
        delete q;
    }
}
void List::Clear()
{
    ListPointer q;
    while (head != NULL)
    {
        q = head;
        head = head->NextNode;
        delete q;
    }
    count = 0;
}
bool List::Empty()
{
    return count == 0;
}
bool List::Full()
{
    return false;
}
int List::Size()
{
    return count;
}
void List::SetPosition(int p, ListPointer &current)
{
    current = head;
    for (int i = 2; i < p; i++)
    {
        current = current->NextNode;
    }
}
void List::Insert(int p, int x)
{
    if (p < 1 || p > count + 1)
    {
        cout << "Posicao Invalida!" << endl;
        return;
    }
    ListPointer NewNode;
    NewNode = new ListNode;
    if (NewNode == NULL)
    {
        cout << "Falha!" << endl;
        return;
    }
    NewNode->Entry = x;
    ListPointer current;
    if (p == 1)
    {
        NewNode->NextNode = head;
        head = NewNode;
    }
    else
    {
        SetPosition(p - 1, current);
        NewNode->NextNode = current->NextNode;
        current->NextNode = NewNode;
    }
    count++;
}
void List::Delete(int p, int &x)
{
    if (p < 1 || p > count)
    {
        cout << "Posicao Invalida!" << endl;
        return;
    }
    if (Empty())
    {
        cout << "Lista Vazia!" << endl;
        return;
    }
    ListPointer current, Node;
    if (p == 1)
    {
        Node = head;
        head = head->NextNode;
    }
    else
    {
        SetPosition(p - 1, current);
        Node = current->NextNode;
        current->NextNode = Node->NextNode;
        x = Node->Entry;
        delete Node;
        count--;
    }
}
bool List::SearchMax(int &p, int &x)
{
    if (Empty())
    {
        cout << "Ta vazio bro!" << endl;
        return;
    }
    int _count = 1;
    ListPointer NewNode;
    NewNode = head->NextNode;
    p = 1;
    x = NewNode->Entry;
    while (NewNode->NextNode != NULL)
    {
        _count++;
        if (NewNode->Entry > x)
        {
            p = _count;
            x = NewNode->Entry;
        }
        NewNode = NewNode->NextNode;
    }
}
bool List::Swap(int &p1, int &p2)
{
    if (Empty())
    {
        cout << "Lista Vazia!" << endl;
        return;
    }
    ListPointer NewNode1 = head;
    for (int i = 0; i < p1; i++)
        NewNode1 = NewNode1->NextNode;

    ListPointer NewNode2 = head;
    for (int i = 0; i < p1; i++)
        NewNode2 = NewNode2->NextNode;

    ListPointer NewNodeX;
    NewNode1 = NewNodeX;
    NewNode2 = NewNode1;
    NewNode1 = NewNodeX;
}