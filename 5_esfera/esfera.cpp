#include "esfera.h"
#include <iostream>
#include <cmath>
#define _use_math_defines
using namespace std;

void Esfera::RecebeRaio(double r){
    if (r < 0)
    {
        cout << "Error: Raio informado negativo" << endl;
        abort();
    }
    
    raio = r;
}

double Esfera::CalculaArea(){ 
    double area = 4 * M_PI * (raio * raio);
    return area;
}

double Esfera::CalculaVolume(){
    double volume = (4 * M_PI * (raio * raio * raio))/3;
    return volume;
}