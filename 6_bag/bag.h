#ifndef BAG_H
#define BAG_H

const int CAPACITY = 20;

class Bag
{
private:
    int Data[CAPACITY+1];
    int Used;
public:
    Bag();
    void Insert(int n);
    int Ocurrence(int n);
    void Remove();
    bool Full();
};

#endif // BAG_H