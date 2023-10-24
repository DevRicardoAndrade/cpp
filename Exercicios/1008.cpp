#include <iostream>
#include <iomanip>
int main()
{
    int Horas, Numero;
    float ValorHora, Salario;
    std::cin >> Numero;
    std::cin >> Horas;
    std::cin >> ValorHora;
    Salario = Horas * ValorHora;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "NUMBER = " << Numero << std::endl;
    std::cout << "SALARY = U$ " << Salario << std::endl;
}