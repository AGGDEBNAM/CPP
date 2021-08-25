#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <cstdlib>


using namespace std;

int main(void)
{
    string entrada = "";
    int salida = 0;

    char entrada_1 [40];
    int uno = 1;
    string *pointer ;
    char x;

    while(true)
    {
        cout << " \n\n Si deseas convertir 'A' o 'a' en numero 1  '1' " << endl;
        cout << " \n\n Si deseas Saber cantidad de consonantes   'C' " << endl;
        cout << " \n\n Si deseas salir 'S' para salir " << endl;
        cin >> entrada ;        
        if(entrada == "S") break;
        if(entrada == "1")
        {
          cout << " \n\n En este espacio puedes escribir tu frase:  " << endl;
          cin >> entrada_1;
          size_t strlen(const char x);
          while (entrada_1[x] != '\x0')
        {
            x++; cout << entrada_1[x];
        }

        }
        if(entrada == "C")
        {

 

        }
        

    }

    return 0;

}