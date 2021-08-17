#include <iostream>
#include <string>

using namespace std;

int main()
{
   /*string hola = "Hola"; // String es una variable compuesta, no nativa
   string string2 = ""; // String vacio
   string2 = hola;
   cout << string2 << " " << hola << endl;
   //String comparison, return 0 if true
   int result = hola.compare(string2);
   cout << result << endl;
   // Access to a string character
   cout << hola.at(0) << endl;
   // Size & lenght return int elements of string
   cout << hola.length() << endl;
   cout << hola.size() << endl;
   // Assign new strign to an existing one with assign
   cout << "First String " << hola << endl;
   cout << "Using Assign()" << endl;
   string another_one = "Holo conobo";
   hola.assign("Another string different from the first one");
   cout << hola << endl;
   // Swap method changes strings values between them, only admit 2 strings
   cout << "Valor de hola : " << hola << endl;
   cout << "Valor de string2 : " << string2 << endl;
   // Using swap
   hola.swap(string2);
   cout << "Usando Swap : \t" << "hola : " << hola << "\t" << " string2 : "<< string2 << endl;
   // push_back() receives 1 character and inputs it as the last element of the string.
   hola.push_back('&');
   cout << hola << endl;
   //erase(starts, number of characters to delete) erases elements of a string
   hola.erase(2, 2);
   cout << hola << endl;
   // append(number of characters, character(char) to input). It appends them at the very end of the string
   hola.append(4, '!');
   cout << hola << endl;
   //Concatenation of strings
   hola += "There!";
   cout << hola << endl;
   //replace() replaces characters in a string
   hola.replace(0,2,"Another string");
   cout << hola << endl;
   //substr divides a string in parts
   //There multiples substr overloads
   string del_Toro = "uno dos tres toca la pared";
   cout << del_Toro.substr(0,3) << endl;
   // This one takes from the eighth char to the last one
   cout << del_Toro.substr(8) << endl;

   //find() returns the psoition of the first character found
   cout << del_Toro.find("o") << endl;

   //Converting from string type to another
   string str = "49.5 red ballons";
   size_t idx = 0;
   double d = stod(str, &idx); // solo para tipo de variables nativos, stdoi for int, stdof for floats, etc..
   cout << d << endl;*/
   string cadena_ingresada_por_el_usuario = "";
   bool verifica_palabra = true;
   cout << "Ingresa una cadena de texto:";
   getline(cin, cadena_ingresada_por_el_usuario); // Uso getline porque solo con el cin me da problemas al ingresar el string
   cadena_ingresada_por_el_usuario.at(0) = toupper(cadena_ingresada_por_el_usuario.at(0)); // Capitalizamos la primera letra de la primera palabra
   for(int i = 0; i < cadena_ingresada_por_el_usuario.length(); i++)
   {
      // Checa si el caracter es un signo de puntuación o un espacio, si regresa false es que el siguiente caracter no es el inicio de una palabra
      if ((ispunct(cadena_ingresada_por_el_usuario.at(i))) || (isspace(cadena_ingresada_por_el_usuario.at(i))))
         verifica_palabra = false;
      // Checa si el caracter en i es un valor de tipo alfabético
      else if ((verifica_palabra==false) && (isalpha(cadena_ingresada_por_el_usuario.at(i))))
      {
         cadena_ingresada_por_el_usuario.at(i)=toupper(cadena_ingresada_por_el_usuario.at(i));
         verifica_palabra = true;
      }
   }
   cout << cadena_ingresada_por_el_usuario << endl;
   return 0;
}
