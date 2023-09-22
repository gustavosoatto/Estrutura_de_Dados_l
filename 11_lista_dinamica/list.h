#ifndef LIST_H
#define LIST_H

class List
{
private:
    struct ListNode
    {
        ListNode *NextNode;
        int Entry;
    };
    typedef ListNode *ListPointer;
    void SetPosition(int p, ListPointer &current);
    ListPointer head;
    int count;

public:
    List();
    ~List();
    bool Empty();
    bool Full();
    void Insert(int p, int x);
    void Delete(int p, int &x);
    int Size();
    void Retrieve(int p, int &x);
    void Clear();
    void Replace(int p, int x);
};

#endif // LIST_H