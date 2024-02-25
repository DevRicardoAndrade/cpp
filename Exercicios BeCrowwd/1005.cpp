#include <iostream>
#include <iomanip>
int main()
{
    double A, B, MEDIA;
    double pesoA = 3.5, pesoB = 7.5;
    std::cin >> A;
    std::cin >> B;
    MEDIA = (((A * pesoA) + (B * pesoB)) / (pesoA + pesoB));
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << MEDIA << std::endl;
}
