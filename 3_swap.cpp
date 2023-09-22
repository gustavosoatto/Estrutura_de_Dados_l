#include <iostream>
using namespace std;

void swap(void* &left, void* &right){ 
    void* temp = left;  
    left = right;   
    right = temp;
    cout << left << " function " << right << endl;
};

int main()
{   
    void* left = new int[0];
    void* right = new int[0]; 

    cout << left << " " << right << endl;
    swap(left, right); 
    cout << left << " " << right << endl;
}
