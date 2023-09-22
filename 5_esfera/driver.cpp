#include <iostream>
#include "esfera.h"
using namespace std;

int main()
{
    Esfera bola1, bola2;

    bola1.RecebeRaio(10);
    bola2.RecebeRaio(2);

    cout << bola1.CalculaArea() << endl;
    cout << bola2.CalculaArea() << endl;

    cout << bola1.CalculaVolume() << endl;
    cout << bola2.CalculaVolume() << endl;


}
