#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string resistencia = "";
	int suma = 0;


	cout << " \n\n\n SISTEMA DE SUMA DE RESISTENCIAS EN SERIE \n\n\n " << endl;

	while (true)
	{

	cout << " \n Inserte su resistencia sin adementos_k_ohms__Si desea terminar las suma inserte_'sumar'_: \n " << endl;
	cout << " \n " ; cin >> resistencia;
	if (resistencia == "sumar") break;
	suma += stoi(resistencia);

	}

    cout << " \n\n\n LA SUMATORIA ES \n\n " << suma << "  Ω ohms" << endl;


    return 0;

}