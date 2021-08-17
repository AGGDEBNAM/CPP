#include <iostream>
#include <string>

using namespace std;

int main()
{

	double km = 1.609, m = 1609.34, yarda = 1759.99, pie = 5279.98, pulg = 63359.84;
	string cantidad = "" ;
	string entrada = "" ;// En esta esta es preferible poner un string ya que si se usa una double esta al//
                         //insertarle un caracter alfabetico dentro de la condicional "while" repite sin un return dentro de esta, el return no//
	                     //se pone ya que si se pone no repetiria la funcion que es lo que se quiere lograr por lo que un stoi al detectar que el//
						 //caracter en la variable no es posible detiene la funcion//
	cout << " \n\n CONVIERTE MILLAS A TU MEDIDA ESTABLECIDA\n\n ";

	while(true){
	cout << " \n SI DESEAS REPETIR ELIGE TU MEDIDA O SI DESEAS SALIR '=' \n ";
	cout << " \n Introduce tu medida'km'_'m'_'yarda'_'pie'_'pulg' a longitud en millas: \n ";
	cin >> entrada;
	if(entrada == "=") break;
	if(entrada == "km"){
	cout << " \n\n Introduce la longitud en millas: \n\n ";
	cin >> cantidad;
	cout << " \n\n La conversion a kilometros es: " << km * stoi (cantidad);
	}
	if(entrada == "m"){
	cout << " \n\n Introduce la longitud en millas: \n\n ";
	cin >> cantidad;
	cout << " \n\n La conversion a metros es: " << m * stoi (cantidad);
	}
	if(entrada == "yarda"){
	cout << " \n\n Introduce la longitud en millas: \n\n ";
	cin >> cantidad;
	cout << " \n\n La conversion a yardas es: " << yarda * stoi (cantidad);
	}
	if(entrada == "pie"){
	cout << " \n\n Introduce la longitud en millas: \n\n ";
	cin >> cantidad;
	cout << " \n\n La conversion a pies es: " << pie * stoi (cantidad);
	}
	if(entrada == "pulg"){
	cout << " \n\n Introdue la longitud en millas: \n\n ";
	cin >> cantidad;
	cout << " \n\n La conversion a pulgadas es: " << pulg * stoi (cantidad);
    }
	}

	return 0;

}
