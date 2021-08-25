#include <iostream>
#include <string>

using namespace std;

int main()
{

    string entrada;
    int guardado;


    do
    {

        cout << "  FAHRENHEIT A CELSIUS " << endl;
        cout << "  CELSIUS A FAHRENHEIT " << endl;
        cout << "  \n\n\n " << endl;
        cout << "  Ingresa ' F ' para calcular celsius " << endl;
        cout << "  Ingresa ' C ' para calcular fahrenheit " << endl;
        cout << "  Ingresa ' S ' para salir " << endl;

    }  
    while (true)
    {
        if(entrada == "F" )
        {
            
            cout << "Introduze temperatura " << endl;

        }
        if(entrada == "C" )
        {

        }
        if(entrada == "S" ) break;

    }
    
    return 0;

}