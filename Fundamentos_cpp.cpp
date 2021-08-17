// tabla de ley de ohm.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
//iostream es libreria para std y cout//
#include <iostream>
//se incluye para no repetirlo en cout//
#include <stdio.h>
using namespace std;

 int main()
{
	// count es una forma de poder imprimir si printf y scanf//
	cout << "Hola Mundo" << endl;
	//printf y scanf son las que ayudan a imprimir sin std y cout//
	//variables enteras//
	int variableEntera = 0;
	//Las variables enteras aunque resivan datos decimales solo guardan la parte entera//

	//Variables decimale u otro tipo//
	double numeroDecimalDoble = 99.7334553;
	float numerodDecimalFlotante = 89.321345;
	char caracterunico = '@';
	bool boleano = true;
	// en el caso boleano
	// true = 1
	// false = 0

	//Reglas de la variables
	 /* 1.- Las variables NO pueden tener espacios
	    2.- Las variables no pueden empezar co numero
		3.- Las varibles pueden empezar con _
		4.- Las variables No pueden no tener nombre */

	cout << variableEntera << endl;
	cout << numerodDecimalFlotante << endl;
	cout << numeroDecimalDoble << endl;
	cout << caracterunico << endl;
	cout << boleano << endl;

	/* Operadores basicos:
	
	+
	-
	/
	*
	()
	
	*/

	double numero1 = 4.56;
	double numero2 = 5.67;
	double SUMA = numero1 + numero2;

	cout << "La suma del numero 1:"  << numero1 << endl;
	cout << "Mas el numero 2:"  << numero2 << endl;
	cout << "Es:"  << SUMA << endl;
	

	int a = 20, b = 10;
	printf("El valor de a es %d\n", a);
	printf("El valor de b es %d\n", b);
	printf("Por tanto %d+%d=%d", a, b, a + b);
	
	cout << endl;
	
	int xd = 0;
	int cf = 0;
	int fg = 0;
	
	printf("Ingresa el valor de tus resistencias y representa si estan en paralelo(P) o serie(s) representados con los mismos:/n");
	scanf("%i %i %i", &a, &b, fg);
	printf("Los numeros que ingreso son %i/n %i/n %i/n", a, b, c);

	system("pause");
    return 0;
}