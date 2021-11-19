#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>

using namespace std;

int edad;
char Nombre[40];
int Registro;
char Puesto[40];

void leer()
{
    cout << "Ingrese El edad: ";
    cin >> edad;
    cin.ignore();
    cout << "Ingrese La Nombre: ";
    gets(Nombre);
    cin.ignore();
}
void leer1()
{
    cout << "Ingrese La Registro: ";
    cin >> Registro;
    cin.ignore();
}
void leer2()
{
    cout << "Ingrese Su Puesto: ";
    cin >> Puesto;
    cin.ignore();
}
class Persona
{
public:
    int edad;
    char Nombre[40];
    Persona(int, char *);
    // destructor
    void Muestra();
    void leer();
};
class Estudiante : public Persona
{
public:
    int Registro;
    Estudiante(int);
    void leer1();
    void Muestra1();
    // destructor
};
class Profesor : public Estudiante
{
public:
    char Puesto[40];
    Profesor(char *);
    void leer2();
    void Muestra2();
    // destructor
};
// ustedes poner el constructor de Persona
Persona::Persona(int edad, char *Nombre)
{
    Persona::edad = edad;
    strcpy_s(Persona::Nombre, Nombre);
}
// constructor de herencia
Estudiante::Estudiante(int Registro) : Persona(edad, Nombre)
{
    Estudiante::Registro = Registro;
}
Profesor::Profesor(char *Puesto) : Estudiante(Registro)
{
    strcpy_s(Profesor::Puesto, Puesto);
}
void Persona::Muestra()
{
    cout << "-----Los datos ingresados son:-----\n"
         << endl;
    cout << "edad: " << endl;
    cout << edad << endl;
    cout << "Nombre: " << endl;
    cout << Nombre << endl;
}
void Estudiante::Muestra1()
{
    cout << "-----Los datos ingresados son:-----\n"
         << endl;
    cout << "edad: " << endl;
    cout << edad << endl;
    cout << "Nombre: " << endl;
    cout << Nombre << endl;
    cout << "Registro: " << endl;
    cout << Registro << endl;
}
void Profesor::Muestra2()
{
    cout << "-----Los datos ingresados son:-----\n"
         << endl;
    cout << "edad: " << endl;
    cout << edad << endl;
    cout << "Nombre: " << endl;
    cout << Nombre << endl;
    cout << "Registro: " << endl;
    cout << Registro << endl;
    cout << "Puesto: " << endl;
    cout << Puesto << endl;
}
int main(void)
{
    //^ Bandera variables
    int flag = 0;
    char num;
    do
    {
        cout << "---------------Que Deseas relizar---------------" << endl;
        cout << "A- Crear y mostrar la clase Persona" << endl;
        cout << "B- Crear y mostrar la clase heredada Estudiante" << endl;
        cout << "C- Crear y mostrar la clase Heredada escalonada Profesor" << endl;
        cout << "S- Salir\n\n"
             << endl;
        cin >> num;
        cin.ignore();
        switch (num)
        {
        case 'a':
        {
            leer();
            Persona p1(edad, Nombre);
            p1.Muestra();
        }
        break;
        case 'b':
        {
            leer1();
            Estudiante p2(Registro);
            p2.Muestra1();
        }
        break;
        case 'c':
        {
            leer2();
            Profesor p3(Puesto);
            p3.Muestra2();
        }
        break;
        case 's':
        {
            flag = 1;
        }
        break;
        default:
            cout << "Intentelo de nuevo" << endl;
            break;
        }
    } while (flag == 0);
}