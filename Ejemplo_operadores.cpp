#include <iostream>

using namespace std;

class Binario // operador -=
{
private:
public:
    int real, imag;

    Binario(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void print() { cout << " Operador Binario -= : \n" << "Constantes de Objeto 'Numero real': " << "\nSi:\n c1 = 30\n c2 = 15\nEntonces:\n c1 -= c2\nEs igual a:\n c1 = " << real << "\n Constantes de Objeto 'Numero imaginario': " << "\nSi:\n c1 = 20\n c2 = 10\nEntonces:\n c1 -= c2\nEs igual a:\n c1 = i" << imag << endl; }

    friend Binario operator-=(Binario const &, Binario const &);// funcion amiga del operador general 
};
class Unario : public Binario // operador - con herencia de obj.imag
{
private:
public:
    int complex;

    Unario(int i = 0, int c = 0)
    {
        complex = c;
        imag = i;
    }
    void print1() { cout << "\n\n Operador Unario - : \n" << "Constantes de Objeto 'Numero complejo': " << "\nSi:\n c4 = 30\n c5 = i10\nEntonces:\n c4 - c5\nEs igual a:\n c6 = i" << complex << "\n Constantes de Objeto 'Numero imaginario': " << "\nSi:\n c4 = 15\n c5 = 30\nEntonces:\n c4 - c5\nEs igual a:\n c6 = " << imag << endl; }

    friend Unario operator-(Unario const &, Unario const &);// funcion amiga del operador general
};

Binario operator-=(Binario const &c1, Binario const &c2)// sobregarga por medio de constantes
{
    return Binario(c1.real - c2.real, c1.imag - c2.imag);
}
Unario operator-(Unario const &c4, Unario const &c5)// sobregarga por medio de constantes
{
    return Unario(c4.complex - c5.complex, c4.imag - c5.imag);
}

int main()
{
    Binario c1(30, 20), c2(15, 10);
    Binario c3 = c1 -= c2;
    c3.print();
    Unario c4(30, 15), c5(10, 30);
    Unario c6 = c4 - c5;
    c6.print1();
    return 0;
}