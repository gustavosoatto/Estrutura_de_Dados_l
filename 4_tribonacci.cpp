#include <iostream>
using namespace std;

void tribonacci(unsigned int* signature, unsigned int n, unsigned int* result){
    if (n>0 && n<=3)
    {
        for (int i = 0; i < n; i++){
        {
            result[i]=signature[i];
        }
    }
    else{
        for (int i = 0; i <=2; i++){
            result[i]=signature[i];
        }
    }

    int ap = signature[0];
    int p = signature[1];
    int u = signature[2];
    int res;

    for (int i = 3; i < n; i++)
    {
        res = ap + p + u;
        result[i] = res;
        ap = p;
        p = u;
        u = res;
    }
    
    
}

int main()
{
    unsigned int* assinatura = new unsigned int[3];
    unsigned int n;
    unsigned int* resultado;

    for (int i = 0; i < 3; i++)
    {
        cout<<"informe o numero da assinatura de indice: "<<i<<endl;
        cin >> assinatura[i];
    }
    
    cout<<"Informe a quantidade de elementos da sequencia que deseja: "<<endl;
    cin>>n;

    resultado = new unsigned int[n];

    //...
}
