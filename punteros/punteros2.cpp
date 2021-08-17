#include <iostream>

using namespace std;

int main() 
{
	int edad = 10;
	int *ptr; //Definimos un puntero a entero

	ptr = &edad; //Guardamos la dirección de memoria de la variable edad en el puntero

	cout << *ptr << endl; //Mostramos el contenido de la variable apuntada por el 	puntero
	cout << edad << endl; //Comprobamos que la variable ha cambiado
	return 0;
}