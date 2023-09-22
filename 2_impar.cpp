#include <iostream>
#include <string>
using namespace std;

void impar(int *vector, int t)
{
    int teste, impar;

    for (int i = 0; i < t; i++)
    {
        teste++;
        for (int j = 0; j < t; j++)
        {
            if (vector[i] == vector[j])
            {
                teste = vector[i] + vector[j];
            }
        }
        if (teste % 2 != 0)
        {
            impar = vector[i];
            cout << impar << endl;
        }
    }
}

int main()
{
    int t = 3;
    int vector[3] = {1, 1, 2};

    impar(vector, t);
}
