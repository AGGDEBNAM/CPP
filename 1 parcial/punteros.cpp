#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
int main()
{
    int novalido = 0;
    do
    {
        cout << "QUE QUIERE REALIZAR?\n";
        cout << "Remplazar por A = A";
        cout << "Remplazar por Vocales = B";
        cout << "Salir = S";
        char menu;
        cin >> menu;

        switch (menu)
        {
        case 'A':
        {
            cout << "escriba una frase: ";
            char frase[50];
            char *p;
            gets(frase);
            p = &frase[0];
            while (*p != '\x0')
            {
                if (*p == 'A' || *p == 'a')
                    *p = '1';
                p++;
            }
            cout << "la frase es: " << frase << "\n";
        }
        break;
        case 'B':
        {
            int Lectorascii = 0;
            char frase[50];
            char *p;
            p = &frase[0];
            cout << "escriba una frase: ";
            gets(frase);
            while (*p != '\x0')
            {
                if ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
                {
                    if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
                    {
                        p++;
                    }
                    else
                    {
                        Lectorascii++;
                        p++;
                    }
                }
                else
                    p++;
            }
            cout << "contador vocales: " << Lectorascii << "\n";
        }
        break;
        case 'S':
        {
            novalido = 1;
        }
        break;
        default:
            cout << "no reconozco, vuelva a intentar";
            break;
        }
    } while (novalido == 0);
}