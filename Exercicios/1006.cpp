#include <iostream>
#include <iomanip>
int main()
{
    double A, B, C, MEDIA;
    int pesoA = 2, pesoB = 3, pesoC = 5;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    MEDIA = (((A * pesoA) + (B * pesoB) + (C * pesoC)) / (pesoA + pesoB + pesoC));
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "MEDIA = " << MEDIA << std::endl;
}
