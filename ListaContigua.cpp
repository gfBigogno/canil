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

//Força Bruta
int ListaContigua::buscar(Cao c) {
    for(int i=0; i <= quant-1; i++){
        if(c.getCod()== lista[i].getCod()){
            return i;
        }
    }
    return -1;
}

//Busca Binária
int ListaContigua::buscaBinaria(Cao c) {
    //bolha(c);
    int inicio = 0;
    int fim = this->quant-1;
    int meio;

    while(inicio <= fim){
        meio = (inicio+fim)/2;
        if(lista[meio].getCod() == c.getCod()){
            return meio;

            //Para lista com elementos decrescentes >
            //Para lista com elementos crescentes <
        }else if(c.getCod() > lista[meio].getCod()){
            fim = meio-1;
        }else{
            inicio = meio+1;
        }
    }
    return -1;
}
/*
void ListaContigua::bolha(Cao c) {
    int indexFinal = quant-1;

    while(indexFinal > 0){
        for(int i=0; i <= indexFinal-1; i++){
            if(lista[i].getCod() > lista[i+1].getCod()){
                troca(lista[i], lista[i+1], i);
            }
        }
        indexFinal--;
    }
}

void ListaContigua::troca(Cao atual, Cao prox, int i) {
    Cao aux;
    aux.copiar(lista[i]);
    lista[i].copiar(lista[i+1]);
    lista[i+1].copiar(aux);
}
*/