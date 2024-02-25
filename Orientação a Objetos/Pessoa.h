#ifndef PESSOA_H
#define PESSOA_H

#include <list>
#include "Tarefa.h"

using namespace std;

class Pessoa
{
private:
    int _idade;
    string _nome;

public:
    list<Tarefa> tarefas;
    Pessoa(string nome);
    int getIdade();
    string getNome();
    void adicionarTarefas(int quantidade);
};

Pessoa::Pessoa(string nome)
{
    this->_nome = nome;
    this->_idade = 0;
}
int Pessoa::getIdade()
{
    return this->_idade;
}
string Pessoa::getNome()
{
    return this->_nome;
}
void Pessoa::adicionarTarefas(int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        string d = "Tarefa " + to_string(i);
        Tarefa *t = new Tarefa(d);
        this->tarefas.push_front(*t);
    }
}
#endif /* PESSOA_H */