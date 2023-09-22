#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(){
    count = 0;
    tail = 0;
    head = 1;
}
Queue::~Queue(){
    cout << "Fila destruida!" << endl;
}
bool Queue::Empty(){
    return count == 0;
}
bool Queue::Full(){
    return count == MaxQueue;
}
void Queue::Append(int x){
    if (Full()){
        cout << "Fila cheia!" << endl;
        return;
    }
    count++;
    tail = (tail % MaxQueue) + 1;
    Entry[tail] = x;
}
void Queue::Serve(int &x){
    if(Empty()){
        cout << "Fila vazia!" << endl;
        return;
    }
    x = Entry[head];
    count--;
    head = (head % MaxQueue) + 1;
}
int Queue::Size(){
    if(Empty()) {
        cout << "Fila vazia!" << endl;
        return -1;
    }
    return count;
}
void Queue::Front(int &x) {
   if (Empty())
    {
        cout << "Fila vazia!" << endl;
        return;
    }
    x = Entry[head];
}
void Queue::Rear(int &x) {
    if (Empty())
    {
        cout << "Fila vazia!" << endl;
        return;
    }
    x = Entry[tail];
}
void Queue::Clear() {
    count = 0;
    head = 1;
    tail = 0;
}