#include <iostream>
#include "bag.h"
using namespace std;

int main(){
    Bag b1;
    b1.Insert(1);
    b1.Insert(2);

    cout << b1.Ocurrence(2) << endl;

    b1.Remove();

    cout << b1.Full() << endl;
}