#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    struct QueueNode
    {
        int Entry;
        QueueNode *NextNode;
    };
    typedef QueueNode QueueNode;
    QueueNode *head;
    QueueNode *tail;
public:
    Queue();
    ~Queue();
    void Append(int x);
    void Serve(int &x);
    bool Empty();
    bool Full();
    void Front(int &x);
    void Rear(int &x);
    void Clear();
    int Size();
};

#endif // QUEUE_H