// AND, OR, XOR
// Sismples operação em bitwise

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //Configurando saida para Hexadecimal
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);

    //Inicio com 2 argumentos
    int nArg1 = 0x78ABCDEF;
    int nArg2 = 0x12345678;

    //Efetua uma operação de cada vez
    //Operador unario
    cout << " nArg1 = 0x" << nArg1 << endl;
    cout << "~nArg1 = 0x" << ~nArg1 << "\n" << endl;
    cout << " nArg2 = 0x" << nArg2 << endl;
    cout << "~nArg2 = 0x" << ~nArg2 << "\n" << endl;

    //Agora os operadores binarios

    // AND
    cout << " 0x" << nArg1 << "\n"
         << "& 0x" << nArg2 << "\n"
         << "   ---------" << "\n"
         << "  0x" << (nArg1 & nArg2) << "/n"
         << endl;

    // OR

    cout << " 0x" << nArg1 << "\n"
         << "| 0x" << nArg2 << "\n"
         << "   ---------" << "\n"
         << "  0x" << (nArg1 | nArg2) << "/n"
         << endl;

    // XOR

    cout << " 0x" << nArg1 << "\n"
         << "^ 0x" << nArg2 << "\n"
         << "   ---------" << "\n"
         << "  0x" << (nArg1 ^ nArg2) << "/n"
         << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
