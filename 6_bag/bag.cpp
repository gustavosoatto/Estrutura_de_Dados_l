#include <iostream>
#include "bag.h"
using namespace std;

Bag::Bag(){
    Used = 0;
};

void Bag::Insert(int n){
    if (Full()){
        cout << "Estrutura cheia! Nao foi possivel adicionar o elemento" << endl;
        abort();
    }
    Used++;
    Data[Used] = n;
};

int Bag::Ocurrence(int n) {
    int count = 0;
    for (int i = 1; i < Used; i++)
    {   
        if(Data[i] == n){
            count++;
        }
    }
    return count;
};

void Bag::Remove(){
    if(Used <= 0){
        cout << "Erro: adicione um elemento para que possa remover um elemento" << endl;
        abort();
    }
    Used--;
};

bool Bag::Full() {
    if (Used == CAPACITY){
        return true;
        abort();
    };
    return false;
};