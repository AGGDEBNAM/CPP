#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{

    string entrada;
    int guardado;
    int division = 5/9;

    while (true)
    {

        
        cout << "  FAHRENHEIT A CELSIUS " << endl;
        cout << "  CELSIUS A FAHRENHEIT " << endl;
        cout << "  \n\n\n " << endl;
        cout << "  Ingresa ' F ' para calcular celsius " << endl;
        cout << "  Ingresa ' C ' para calcular fahrenheit " << endl;
        cout << "  Ingresa ' S ' para salir " << endl;
        cin >> entrada ;

        if(entrada == "F" );
        {

            cin >> guardado ;
            cout << " Introduze temperatura en fahrenheit " << division * stoi(guardado-32);
            cout >> guardado >> endl;
            fflush(guardado);

        }
        if(entrada == "C" );
        {

            cin >> guardado ;
            cout << " Introduze temperatura en fahrenheit " << division * stoi(guardado+32);
            cout >> guardado >> endl;
            fflush(guardado);

        }
        if(entrada == "S" ) break;

    }
    
    return 0;

}