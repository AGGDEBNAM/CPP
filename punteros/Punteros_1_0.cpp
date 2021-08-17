#include <iostream>

using namespace std;

int main()
{
    int numero_sol;
    int *dir_numero;

    cout << "Digite un numero:" << endl;
    cin >> numero_sol ;

    dir_numero = &numero_sol;

    if (*dir_numero  % 2 == 0)
    {
        cout << "El numero:" << *dir_numero << "-Es Par" << endl; 
        cout << "Su posicion es:" << dir_numero << endl; 
    }
    else
    {
        cout << "El numero:" << *dir_numero << "-Es Inpar" << endl; 
        cout << "Su posicion es:" << dir_numero << endl; 
    } 
    
return 0;

}