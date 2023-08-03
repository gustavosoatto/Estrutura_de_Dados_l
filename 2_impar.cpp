#include <iostream>
#include <string>
using namespace std;

void persistencia(int number)
{
    int i = 0;
    string pri_str, seg_str, ter_str;
    string number_str;

    while (number > 99)
    {
        number_str = to_string(number);
        pri_str = number_str.substr(0, 1);
        seg_str = number_str.substr(1, 1);
        ter_str = number_str.substr(2, 1);
        number = stoi(pri_str) * stoi(seg_str);
        number = number * stoi(ter_str);
        cout << number << endl;
        i++;
    }

    while (number > 9)
    {
        number_str = to_string(number);
        pri_str = number_str.substr(0, 1);
        seg_str = number_str.substr(1, 1);
        number = stoi(pri_str) * stoi(seg_str);
        cout << number << endl;
        i++;

        // if (number > 99)
        // {
        //     ter_str = number_str.substr(2, 1);
        //     number = stoi(pri_str) * stoi(seg_str) * stoi(ter_str);
        // }
    }
    cout << i << endl;
}

void impar(int *vector, int t)
{
    int teste, impar;

    for (int i = 0; i < t; i++)
    {
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

    int number = 4;
    persistencia(number);
}
