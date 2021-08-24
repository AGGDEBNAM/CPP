#include <iostream>

using namespace std;


int main()
{
    string entrada = "";
    int *salida;

    cout << "Introduze tu temperatura en grados fareitnhit" << endl;

    while (true)
    {
        if (entrada == "=") break;
        cin >> " \n \n TpFarit:">> entrada ;
        *salida  =+ stoi(entrada) ;
        cout >> 

    }

    return 0;
    
}