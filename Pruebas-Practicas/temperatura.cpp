#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{

    string entrada = "";
    string guardado1;
    string guardado2;
    int mayor = 5/9;
    int alv = 32;

    while (true)
    {

        
        cout << " \n FAHRENHEIT A CELSIUS " << endl;
        cout << "  CELSIUS A FAHRENHEIT " << endl;
        cout << "  Ingresa ' F ' para calcular celsius " << endl;
        cout << "  Ingresa ' C ' para calcular fahrenheit " << endl;
        cout << "  Ingresa ' S ' para salir " << endl;
        cin >> entrada ;

        if(entrada == "S" ) break;
        if(entrada == "F" )
        {

            cout << " Introduze temperatura en fahrenheit " << endl;
            cin >>  guardado1 ;
            cout << " \n CELSIUS: " << (9/5) * stoi (guardado1) - 32 << endl;

        }
        if(entrada == "C" )
        {

            cout << " Introduze temperatura en celsius " << endl;
            cin >>  guardado2 ;
            cout << " FAHRENHEIT: " << mayor * stoi(guardado2) + 32 << endl;

        }

    }
    
    return 0;

}