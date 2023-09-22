#ifndef QUEUE_H
#define QUEUE_H

const int MaxQueue = 100;
class Queue
{
private:
    int count;
    int tail;
    int head;
    int Entry[MaxQueue+1];
public:
    Queue();
    ~Queue();
    void Append(int x);
    void Serve(int &x);
    bool Empty();
    bool Full();
    void Front(int &x);
    void Rear(int &x);
    int Size();
    void Clear();
};

#endif // QUEUE_H