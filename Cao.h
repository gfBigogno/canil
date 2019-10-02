//
// Created by gustavo on 9/30/19.
//

#ifndef CANIL_CAO_H
#define CANIL_CAO_H

#include <string>

using namespace std;

class Cao {

public:

    Cao();

    Cao(string nome, string raca, int idade, char sexo);

    Cao(const Cao &outro);

    int getIdade() const;

    void setIdade(int idade);

    char getSexo() const;

    void setSexo(char sexo);

    const string &getNome() const;

    void setNome(const string &nome);

    const string &getRaca() const;

    void setRaca(const string &raca);

    void imprime();

    void copiar(Cao c);

    int getCod() const;

    void setCod(int cod);

private:

    int cod;
    int idade;
    char sexo;
    string nome;
    string raca;
    static int id_counter;
};

#endif //CANIL_CAO_H
