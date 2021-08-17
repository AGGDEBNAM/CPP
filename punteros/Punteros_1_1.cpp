#include <iostream>

using namespace std;

void Guardado(int, int);
void Guardado_1(int, int);

int main(void)
{
    int entrada ;
    int *guardado_1 ;
    int **guardado_2 ;

    cout << "ingresa un numero:" << endl;
    cin >> entrada ;
    Guardado(*guardado_1,entrada);
    cout << "ingresa un nuevo numero:" << endl;
    cin >> entrada ;
    Guardado_1(**guardado_2,entrada);
    cout << "Su suma es:" << *guardado_1 + **guardado_2 << endl;

    return 0;

}

void Guardado(int x,int y)
{
    x = y;
}

void Guardado_1(int a,int)
    a = b;

}