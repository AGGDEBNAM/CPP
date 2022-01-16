#include <iostream>
using namespace std;
int main() {
  string entrada = "";
  int sumatoria = 0, numero = 0;
  while (true) {
    cout << "Escribe un numero o '=' para ver la suma:\n";
    cin >> entrada;
    if (entrada == "=") break;
    sumatoria += stoi(entrada);
  }
  cout << "La suma es " << sumatoria;
}


