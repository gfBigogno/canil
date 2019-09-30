//
// Created by gustavo on 9/30/19.
//

#include <iostream>
#include "ListaContigua.h"

using namespace std;

ListaContigua::ListaContigua() {
    this->quant = 0;
    cout << "Digite o tamanho da lista: ";
    cin >> this->tam;

    this->criarLista();
}

ListaContigua::ListaContigua(int tam) {
    this->quant = 0;
    this->tam = tam;

    this->criarLista();
}

void ListaContigua::criarLista() {
    this->lista = new Cao[this->tam];
}

void ListaContigua::shiftEnd() {
    for (int i = quant; i >= 1 ; i--) {
        lista[i].copiar(lista[i-1]);
    }
}

void ListaContigua::insert(Cao c) {
    if(this->quant < this->tam){
        shiftEnd();
        lista[0].copiar(c);
        quant++;
    }else{
        cout << "A lista esta cheia.";
    }
}

void ListaContigua::shiftEnd(int index) {
    for(int i = quant; i >= index; i--){
        lista[i].copiar(lista[i-1]);
    }
}

void ListaContigua::insert(Cao c, int index) {
    if(this->quant < this->tam && index < this->quant){
        shiftEnd(index);
        lista[index].copiar(c);
        quant++;
    }
    if(this->quant >= tam){
        cout << "Lista cheia" << endl;
    }
    if(index >= this->quant){
        cout << "[Nao inserido] Indice maior ou igual a quantidade de elementos.";
    }
}

void ListaContigua::shiftFront() {
    for(int i=0; i <= quant-1; i++){
        lista[i].copiar(lista[i+1]);
    }
}

void ListaContigua::remove() {
    if(this->quant > 0){
        shiftFront();
        quant--;
    }else{
        cout << "A lista esta vazia";
    }
}

void ListaContigua::shiftFront(int index) {
    for(int i=index; i <= quant-1; i++){
        lista[i].copiar(lista[i+1]);
    }
}

void ListaContigua::remove(int index) {
    if(this->quant > 0 && index < this->quant){
        shiftFront(index);
        quant--;
    }
    if(this->quant <= 0){
        cout << "Lista vazia." << endl;
    }
    if(index >= this->quant){
        cout << "[Nao removido] Indice maior que a quantidade de elementos.";
    }
}

void ListaContigua::print() {
    for(int i=0; i<=quant-1; i++){
        lista[i].imprime();
    }
}

int ListaContigua::buscar(Cao c) {
    for(int i=0; i <= quant-1; i++){
        if(c.getNome().compare(lista[i].getNome())){
            return i;
        }
    }
    return -1;
}