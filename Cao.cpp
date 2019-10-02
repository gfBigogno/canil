//
// Created by gustavo on 9/30/19.
//

#include <iostream>
#include "Cao.h"

int Cao::id_counter = -10;

Cao::Cao() {
    this->cod = this->id_counter;
    this->id_counter++;
    this->nome = "";
    this->raca = "vira-lata";
    this->idade = 0;
    this->sexo = 'f';
}

Cao::Cao(string nome, string raca, int idade, char sexo) {
    this->cod = this->id_counter;
    this->id_counter++;
    this->nome = nome;
    this->raca = raca;
    this->idade = idade;
    this->sexo = sexo;
}

Cao::Cao(const Cao &outro) {
    this->cod = outro.getCod();
    this->sexo = outro.getSexo();
    this->idade = outro.getIdade();
    this->raca = outro.getRaca();
    this->nome = outro.getNome();
}

void Cao::copiar(Cao c) {
    this->cod = c.getCod();
    this->sexo = c.getSexo();
    this->idade = c.getIdade();
    this->raca = c.getRaca();
    this->nome = c.getNome();
}

void Cao::imprime() {
    cout << "******************************" << endl;
    cout << "Cod: " << cod << endl;
    cout << "Nome: " << nome << endl;
    cout << "Raca: " << raca << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "******************************" << endl;
}

int Cao::getIdade() const {
    return idade;
}

void Cao::setIdade(int idade) {
    Cao::idade = idade;
}

char Cao::getSexo() const {
    return sexo;
}

void Cao::setSexo(char sexo) {
    Cao::sexo = sexo;
}

const string &Cao::getNome() const {
    return nome;
}

void Cao::setNome(const string &nome) {
    Cao::nome = nome;
}

const string &Cao::getRaca() const {
    return raca;
}

void Cao::setRaca(const string &raca) {
    Cao::raca = raca;
}

int Cao::getCod() const {
    return cod;
}

void Cao::setCod(int cod) {
    Cao::cod = cod;
}
