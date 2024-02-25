#include <iostream>

int main()
{
    int lista[5] = {9, 2, 7, 10, 14};
    int n = std::size(lista);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                int aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << lista[i] << ", ";
}
