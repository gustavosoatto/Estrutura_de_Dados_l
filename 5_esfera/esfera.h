#ifndef ESFERA_H
#define ESFERA_H

class Esfera{
private:
    double raio;
public:
    void RecebeRaio(double r);
    double CalculaArea();
    double CalculaVolume();
};

#endif // ESFERA_H