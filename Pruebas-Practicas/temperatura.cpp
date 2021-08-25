#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{

    string entrada [1];
    int guardado1;
    int guardado2;
    int division = 5/9;

    while (true)
    {

        
        cout << "  FAHRENHEIT A CELSIUS " << endl;
        cout << "  CELSIUS A FAHRENHEIT " << endl;
        cout << "  Ingresa ' F ' para calcular celsius " << endl;
        cout << "  Ingresa ' C ' para calcular fahrenheit " << endl;
        cout << "  Ingresa ' S ' para salir " << endl;
        cin >> entrada ;

        if(entrada == "S" ) break;

        if(entrada == "F" );
        {

            cin >> guardado1 ;
            cout << " Introduze temperatura en fahrenheit " << division * guardado1 - 32 << endl;
            cout << guardado1 << endl;

        }
        if(entrada == "C" );
        {

            cin >> guardado2 ;
            cout << " Introduze temperatura en fahrenheit " << division * guardado2 + 32 << endl;
            cout << guardado2 << endl;

        }

    }
    
    return 0;

}