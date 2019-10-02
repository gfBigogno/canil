//
// Created by gustavo on 9/30/19.
//

#ifndef CANIL_LISTACONTIGUA_H
#define CANIL_LISTACONTIGUA_H


#include "Cao.h"

class ListaContigua {

public:
    ListaContigua();

    ListaContigua(int tam);

    void criarLista();

    void insert(Cao c);

    void shiftEnd();

    void insert(Cao c, int index);

    void shiftEnd(int index);

    void remove();

    void shiftFront();

    void remove(int index);

    void shiftFront(int index);

    int buscar(Cao c);

    void print();

    int buscaBinaria(Cao c);

    void bolha(Cao c);

    void troca(Cao atual, Cao prox, int i);

private:
    int tam;
    int quant;
    Cao *lista;
};


#endif //CANIL_LISTACONTIGUA_H
