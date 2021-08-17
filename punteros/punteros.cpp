
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{ 

    int asignacion = 9;
    int* ptr;
    int** ptrptr;
    ptr = &asignacion;
    ptrptr = &ptr;

    //impresion//

    cout << "ES:" << asignacion << endl;
    cout << "ES:" << *ptr << endl;
    cout << "ES:" << **ptrptr << endl;

    return 0;
}