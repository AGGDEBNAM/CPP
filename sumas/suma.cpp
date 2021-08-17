#include <iostream>

using namespace std;

int main(){
   int suma = 0,limite, numero_a_sumar;
   cout << "Ingresa un limite:";
   cin >> limite;
   for(int i = 0; i < limite; i++)
   {
      cin >> numero_a_sumar;
      suma += numero_a_sumar;
   }
   cout << "La suma de los numeros ingresados es de "<< suma << endl;
   return 0;
}
