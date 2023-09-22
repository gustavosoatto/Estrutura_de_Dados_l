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
    }
    cout << i << endl;
}

int main()
{
    int number = 4;
    persistencia(number);
}
