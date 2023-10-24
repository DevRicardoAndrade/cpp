#include <iostream>
int main()
{
    int A, B, C, D, DIFERENCA;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> D;
    DIFERENCA = ((A * B) - (C * D));
    std::cout << "DIFERENCA = " << DIFERENCA << std::endl;
}