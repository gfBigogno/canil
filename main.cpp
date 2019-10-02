#include <iostream>
#include "ListaContigua.h"

using namespace std;

int main() {

    ListaContigua lista(10);

    Cao c1("lulu", "pincher", 9, 'f');
    Cao c2("lala", "boxer", 6, 'm');
    Cao c3("toto", "vira-lata", 3, 'f');

    lista.insert(c1);
    lista.insert(c2);
    lista.insert(c3);

    //lista.remove(2);

    lista.print();
    cout << "++++++++++++++++++++++" << endl;
    cout << lista.buscar(c1) << endl;
    cout << lista.buscar(c2) << endl;
    cout << lista.buscar(c3) << endl;
    cout << "++++++++++++++++++++++" << endl;
    cout << lista.buscaBinaria(c1) << endl;
    cout << lista.buscaBinaria(c2) << endl;
    cout << lista.buscaBinaria(c3) << endl;

    return 0;
}