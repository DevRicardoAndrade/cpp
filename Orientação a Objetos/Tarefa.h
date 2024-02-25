#ifndef TAREFA_H
#define TAREFA_H

using namespace std;
class Tarefa
{
private:
    string _descricao;
    bool _concluida;

public:
    Tarefa(string descricao);
    void concluir();
    string getDescricao();
    bool estaConcluida();
};

Tarefa::Tarefa(string descricao)
{
    this->_concluida = false;
    this->_descricao = descricao;
}
void Tarefa::concluir()
{
    this->_concluida = true;
}
string Tarefa::getDescricao()
{
    return this->_descricao;
}
bool Tarefa::estaConcluida()
{
    return this->_concluida;
}
#endif /* TAREFA_H */