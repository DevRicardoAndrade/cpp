#include <iostream>
#include <iomanip>
int main()
{
    const double n = 3.14159;
    double raio, area;
    std::cin >> raio;
    area = n * (raio * raio);
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "A=" << area << std::endl;
}
