#include <iostream>
#include "Pessoa.h"
using namespace std;
int main()
{
    Pessoa *p = new Pessoa("Ricardo");

    std::cout << p->getNome() << " nasceu!" << endl;

    p->adicionarTarefas(5);

    return 0;
}