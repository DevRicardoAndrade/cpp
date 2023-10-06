#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

struct aluno{
    string nome;
    int idade;
    string materia;

    void falar(string fala){
        cout << fala + "\n";
    }
};

void log(string texto){
    cout << texto;
}

float calcularMedia(int notas[3]){
    float soma = 0;
    for (int i = 0; i < 3; i++)
    {
        soma += notas[i];
    }
    return soma / 3;
}
int fatorial(int n){
    if (n == 0)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}
void popularLista(list<string> &acoes){
    acoes.push_front("Estudar");
    acoes.push_back("Jogar");

}

int main (int argc, char *argv[]) {

    //Funcoes
    int notas[3] = {0,0,0};
    float media = 0;

    for (int i = 0; i < 3; i++)
    {
        log("Digite sua nota " + to_string(i + 1) + ": \n");
        cin >> notas[i];
    }
    

    media = calcularMedia(notas);

    log("Sua média de nota é: " + to_string(media) + "\n");

    //Recursividade
    int res = fatorial(4);
    log("Fatorial de 4 com recursividade: " + to_string(res) + "\n");

    //Enums
    enum area {Tecnologia, Engenharia, Advocacia};

    area areaSelecionada = Tecnologia;

    log(to_string(areaSelecionada) + "\n");

    //Pilha/Stack
    stack<string> proffisoes;

    proffisoes.push("Engenharia");
    proffisoes.push("Advocacia");
    proffisoes.push("Tecnologia");
    if(!proffisoes.empty()){
        int sizeStack = proffisoes.size();
        for (int i = 0; i < sizeStack; i++)
        {
            string item = proffisoes.top();
            log("Item a ser retirado da pilha: " + item + "\n");
            proffisoes.pop();
            log("Retirado...\n");
        }
        
    }

    //Fila/Queue
    queue<string> tarefas;

    tarefas.push("Passear com cachorro");
    tarefas.push("Tomar banho");
    tarefas.push("Alimentar");  

    log("Primeira tarefa: " + tarefas.front() + "\n");
    log("-------------------------------------------\n");
    log("Ultima tarefa: " + tarefas.back() + "\n");
    while(!tarefas.empty()){
        log(tarefas.front() + "\n");
        log("Concluído! \n");
        tarefas.pop();
    }

    //Lista
    list<string> acoes;
  
    popularLista(acoes);

    int listSize = acoes.size();
    acoes.sort();
    for (int i = 0; i < listSize; i++)
    {
        log("Lista começando pelo primeiro item\n");
        log(acoes.front() + "\n");
        log("Retirando item...\n");
        acoes.pop_front();
        log("Retirado\n");
    }
    
    popularLista(acoes);
    listSize = acoes.size();
    acoes.reverse();
    for (int i = 0; i < listSize; i++)
    {
        log("Lista começando pelo ultimo item\n");
        log(acoes.back() + "\n");
        log("Retirando item...\n");
        acoes.pop_back();
        log("Retirado\n");
    }
    
    list<string>::iterator it;

    popularLista(acoes);

    it = acoes.begin();
    advance(it, 1);

    acoes.insert(it, "Programar");

    listSize = acoes.size();

    for (int i = 0; i < listSize; i++)
    {
        if(i == 1){
            log(acoes.front() + "\n");
            acoes.pop_front();
        }
        else{
            acoes.pop_front();  
        }
    }
    popularLista(acoes);
    advance(it, 0);
    acoes.erase(it);

    acoes.clear();

    list<int> numeros1,numeros2;
    for (int i = 0; i < 10; i++)
    {
        numeros1.push_front(i);
        int i2 = i + 1;
        numeros2.push_front(i2);
    }
    numeros1.merge(numeros2);
    int size = numeros1.size();
    log(to_string(size) + "\n");

    //Struct
    aluno a1;
    a1.idade = 23;
    a1.materia = "Sistemas de Informação";
    a1.nome = "Ricardo Andrade";    

    log("Aluno: " + a1.nome + " Materia: " + a1.materia + "\n");
    a1.falar("Olá");

    aluno *alunos = new aluno[2];

    aluno a2;
    a2.idade = 21;
    a2.materia = "Estetica";
    a2.nome = "Ana Beatriz";    


    alunos[0] = a1;
    alunos[1] = a2;

    for (int i = 0; i < 2; i++)
    {
        alunos[i].falar("Olá meu nome é: " + alunos[i].nome + "\n");
    }
    
    //Ponteios

    int *point;
    int valor = 187;

    point = &valor;

    cout << "\n" << point << "\n" << &valor;
    cout << "\n" << *point << "\n" << valor;

    *point = 195;

    cout << "\n" << point << "\n" << &valor;
    cout << "\n" << *point << "\n" << valor;

    int *ponteiro;
    int vetor[10];

    // ponteiro = vetor; ou ponteiro = &vetor[0];
    ponteiro = vetor;

    cout << "\n" << ponteiro << "\n";

    *(ponteiro++);

    cout << "\n" << ponteiro << "\n";

    ponteiro = vetor;

    for (int i = 0; i < 10; i++)
    {
        *ponteiro = i;
        cout << vetor[i] << "\n";
        *(ponteiro++);
    }
    
    //Fim
    return 0;
}